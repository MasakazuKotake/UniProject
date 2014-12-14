/**
*	@file	UniMath.cpp
*	@brief
*	@author	MASAKAZU KOTAKE
*	@date	UPDATE : 2014/12/13
*/

/**
*	インクルード
*/
#include "UniMath.h"

namespace UniMath{


	Radian::Radian ( float r=0 ) : mRad(r) {}

	Radian::Radian ( const Degree& d ){
	
	}
	
	Radian& operator = ( const float& f ) { mRad = f; return *this; }
	Radian& operator = ( const Radian& r ) { mRad = r.mRad; return *this; }
	Radian& operator = ( const Degree& d );

		float valueDegrees() const; // see bottom of this file
		float valueRadians() const { return mRad; }
		float valueAngleUnits() const;

		const Radian& operator + () const { return *this; }
		Radian operator + ( const Radian& r ) const { return Radian ( mRad + r.mRad ); }
		Radian operator + ( const Degree& d ) const;
		Radian& operator += ( const Radian& r ) { mRad += r.mRad; return *this; }
		Radian& operator += ( const Degree& d );
		Radian operator - () const { return Radian(-mRad); }
		Radian operator - ( const Radian& r ) const { return Radian ( mRad - r.mRad ); }
		Radian operator - ( const Degree& d ) const;
		Radian& operator -= ( const Radian& r ) { mRad -= r.mRad; return *this; }
		Radian& operator -= ( const Degree& d );
		Radian operator * ( float f ) const { return Radian ( mRad * f ); }
        Radian operator * ( const Radian& f ) const { return Radian ( mRad * f.mRad ); }
		Radian& operator *= ( float f ) { mRad *= f; return *this; }
		Radian operator / ( float f ) const { return Radian ( mRad / f ); }
		Radian& operator /= ( float f ) { mRad /= f; return *this; }

		bool operator <  ( const Radian& r ) const { return mRad <  r.mRad; }
		bool operator <= ( const Radian& r ) const { return mRad <= r.mRad; }
		bool operator == ( const Radian& r ) const { return mRad == r.mRad; }
		bool operator != ( const Radian& r ) const { return mRad != r.mRad; }
		bool operator >= ( const Radian& r ) const { return mRad >= r.mRad; }
		bool operator >  ( const Radian& r ) const { return mRad >  r.mRad; }

		inline friend std::ostream& operator <<
			( std::ostream& o, const Radian& v )
		{
			o << "Radian(" << v.valueRadians() << ")";
			return o;
		}




}


//EOF