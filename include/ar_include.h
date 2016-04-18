/*
    This file is public domain
*/

#ifndef INCLUDE_AR_H
#define INCLUDE_AR_H

#ifndef KERNEL_PRIVATE
#  define KERNEL_PRIVATE  // it is known to unlock ar.h
#  import <ar.h>
#  undef KERNEL_PRIVATE
#else
#  import <ar.h>
#endif

#endif
