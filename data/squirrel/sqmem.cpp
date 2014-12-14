/*
	see copyright notice in squirrel.h
*/
#include "sqpcheader.h"
#include "mspace.h"

void *sq_vm_malloc(SQUnsignedInteger size)
{
    return mspace_malloc(g_mspace, size);
}

void *sq_vm_realloc(void *p, SQUnsignedInteger oldsize, SQUnsignedInteger size)
{
    return mspace_realloc(g_mspace, p, size);
}

void sq_vm_free(void *p, SQUnsignedInteger size)
{
    mspace_free(g_mspace, p);
}