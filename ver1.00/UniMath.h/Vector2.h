/**
*	@file	Vector2.h
*	@brief
*	@author	MASAKAZU KOTAKE
*	@date	UPDATE : 2014/12/13
*/
#ifndef _VECTOR4_H_
#define _VECTOR4_H_

#include "UniMath.h"


namespace UniMath{

	class Vector2
	{
	public:
		float x, y;

	public:
		/** Default constructor.
			@note
				It does <b>NOT</b> initialize the vector for efficiency.
		*/
		inline Vector2();

		inline Vector2(const float fX, const float fY );

		inline explicit Vector2( const float scaler );

		inline explicit Vector2( const float afCoordinate[2] );

		inline explicit Vector2( const int afCoordinate[2] );

		inline explicit Vector2( float* const r );

		/** Exchange the contents of this vector with another. 
		*/
		inline void swap(Vector2& other);

		inline float operator [] ( const size_t i ) const;

		inline float& operator [] ( const size_t i );

		/// Pointer accessor for direct copying
		inline float* ptr()
		{
			return &x;
		}

		/// Pointer accessor for direct copying
		inline const float* ptr() const;

		/** Assigns the value of the other vector.
			@param
				rkVector The other vector
		*/
		inline Vector2& operator = ( const Vector2& rkVector );

		inline Vector2& operator = ( const float fScalar);

		inline bool operator == ( const Vector2& rkVector ) const;

		inline bool operator != ( const Vector2& rkVector ) const;

		// arithmetic operations
		inline Vector2 operator + ( const Vector2& rkVector ) const;

		inline Vector2 operator - ( const Vector2& rkVector ) const;

		inline Vector2 operator * ( const float fScalar ) const;

		inline Vector2 operator * ( const Vector2& rhs) const;

		inline Vector2 operator / ( const float fScalar ) const;

		inline Vector2 operator / ( const Vector2& rhs) const;

		inline const Vector2& operator + () const;

		inline Vector2 operator - () const;

		// overloaded operators to help Vector2
		inline friend Vector2 operator * ( const float fScalar, const Vector2& rkVector );

		inline friend Vector2 operator / ( const float fScalar, const Vector2& rkVector );

		inline friend Vector2 operator + (const Vector2& lhs, const float rhs);

		inline friend Vector2 operator + (const float lhs, const Vector2& rhs);

		inline friend Vector2 operator - (const Vector2& lhs, const float rhs);

		inline friend Vector2 operator - (const float lhs, const Vector2& rhs);

		// arithmetic updates
		inline Vector2& operator += ( const Vector2& rkVector );

		inline Vector2& operator += ( const float fScaler );

		inline Vector2& operator -= ( const Vector2& rkVector );


		inline Vector2& operator -= ( const float fScaler );

		inline Vector2& operator *= ( const float fScalar );

		inline Vector2& operator *= ( const Vector2& rkVector );

		inline Vector2& operator /= ( const float fScalar );

		inline Vector2& operator /= ( const Vector2& rkVector );

		/** Returns the length (magnitude) of the vector.
			@warning
				This operation requires a square root and is expensive in
				terms of CPU operations. If you don't need to know the exact
				length (e.g. for just comparing lengths) use squaredLength()
				instead.
		*/
		inline float length () const;

		/**	Returns the square of the length(magnitude) of the vector.
			@remarks
				This  method is for efficiency - calculating the actual
				length of a vector requires a square root, which is expensive
				in terms of the operations required. This method returns the
				square of the length of the vector, i.e. the same as the
				length but before the square root is taken. Use this if you
				want to find the longest / shortest vector without incurring
				the square root.
		*/
		inline float squaredLength () const;

		/**	Returns the distance to another vector.
			@warning
				This operation requires a square root and is expensive in
				terms of CPU operations. If you don't need to know the exact
				distance (e.g. for just comparing distances) use squaredDistance()
				instead.
		*/
		inline float distance(const Vector2& rhs) const;

		/**	Returns the square of the distance to another vector.
			@remarks
				This method is for efficiency - calculating the actual
				distance to another vector requires a square root, which is
				expensive in terms of the operations required. This method
				returns the square of the distance to another vector, i.e.
				the same as the distance but before the square root is taken.
				Use this if you want to find the longest / shortest distance
				without incurring the square root.
		*/
		inline float squaredDistance(const Vector2& rhs) const;

		/**	Calculates the dot (scalar) product of this vector with another.
			@remarks
				The dot product can be used to calculate the angle between 2
				vectors. If both are unit vectors, the dot product is the
				cosine of the angle; otherwise the dot product must be
				divided by the product of the lengths of both vectors to get
				the cosine of the angle. This result can further be used to
				calculate the distance of a point from a plane.
			@param
				vec Vector with which to calculate the dot product (together
				with this one).
			@return
				A float representing the dot product value.
		*/
		inline float dotProduct(const Vector2& vec) const;

		/**	Normalises the vector.
			@remarks
				This method normalises the vector such that it's
				length / magnitude is 1. The result is called a unit vector.
			@note
				This function will not crash for zero-sized vectors, but there
				will be no changes made to their components.
			@return The previous length of the vector.
		*/

		inline float normalise();

		/**	Returns a vector at a point half way between this and the passed
			in vector.
		*/
		inline Vector2 midPoint( const Vector2& vec ) const;

		/**	Returns true if the vector's scalar components are all greater
			that the ones of the vector it is compared against.
		*/
		inline bool operator < ( const Vector2& rhs ) const;

		/**	Returns true if the vector's scalar components are all smaller
			that the ones of the vector it is compared against.
		*/
		inline bool operator > ( const Vector2& rhs ) const;

		/**	Sets this vector's components to the minimum of its own and the
			ones of the passed in vector.
			@remarks
				'Minimum' in this case means the combination of the lowest
				value of x, y and z from both vectors. Lowest is taken just
				numerically, not magnitude, so -1 < 0.
		*/
		inline void makeFloor( const Vector2& cmp );

		/**	Sets this vector's components to the maximum of its own and the
			ones of the passed in vector.
			@remarks
				'Maximum' in this case means the combination of the highest
				value of x, y and z from both vectors. Highest is taken just
				numerically, not magnitude, so 1 > -3.
		*/
		inline void makeCeil( const Vector2& cmp );

		/**	Generates a vector perpendicular to this vector (eg an 'up' vector).
			@remarks
				This method will return a vector which is perpendicular to this
				vector. There are an infinite number of possibilities but this
				method will guarantee to generate one of them. If you need more
				control you should use the Quaternion class.
		*/
		inline Vector2 perpendicular(void) const;

		/**	Calculates the 2 dimensional cross-product of 2 vectors, which results
			in a single floating point value which is 2 times the area of the triangle.
		*/
		inline float crossProduct( const Vector2& rkVector ) const;

		/**	Generates a new random vector which deviates from this vector by a
			given angle in a random direction.
			@remarks
				This method assumes that the random number generator has already
				been seeded appropriately.
			@param angle
				The angle at which to deviate in radians
			@return
				A random vector which deviates from this vector by angle. This
				vector will not be normalised, normalise it if you wish
				afterwards.
		*/
		inline Vector2 randomDeviant(Radian angle) const;


		/**	Returns true if this vector is zero length. */
		inline bool isZeroLength(void) const;


		/**	As normalise, except that this vector is unaffected and the
			normalised vector is returned as a copy. */
		inline Vector2 normalisedCopy(void) const;

		/**	Calculates a reflection vector to the plane with the given normal .
		@remarks NB assumes 'this' is pointing AWAY FROM the plane, invert if it is not.
		*/
		inline Vector2 reflect(const Vector2& normal) const;

		///	Check whether this vector contains valid values
		inline bool isNaN() const;

		/**	 Gets the angle between 2 vectors.
		@remarks
			Vectors do not have to be unit-length but must represent directions.
		*/
		inline UniMath::Radian angleBetween(const UniMath::Vector2& other) const;

		/**	 Gets the oriented angle between 2 vectors.
		@remarks
			Vectors do not have to be unit-length but must represent directions.
			The	angle is comprised between 0 and 2 PI.
		*/
		inline UniMath::Radian angleTo(const UniMath::Vector2& other) const;

		// special points
		static const Vector2 ZERO;
		static const Vector2 UNIT_X;
		static const Vector2 UNIT_Y;
		static const Vector2 NEGATIVE_UNIT_X;
		static const Vector2 NEGATIVE_UNIT_Y;
		static const Vector2 UNIT_SCALE;

		/**	Function for writing to a stream.
		*/
		inline friend std::ostream& operator <<
			( std::ostream& o, const Vector2& v )
		{
			o << "Vector2(" << v.x << ", " << v.y <<  ")";
				return o;
		}
	};


}


#endif
//EOF