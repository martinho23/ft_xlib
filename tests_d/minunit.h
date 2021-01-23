/*
 * =====================================================================================
 *
 *       Filename:  minunit.h
 *
 *    Description:  minunit header file
 *
 *        Version:  1.0
 *        Created:  10/01/2021 01:22:22
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jfarinha (jf), ajoni844@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef _MINUNIT_H
#define _MINUNIT_H

#include <stdarg.h>

typedef struct errorDetails ErrorDetails;

/* file: minunit.h */
#define mu_assert(message, test, ...) do { if (!(test)){ printf(message, ##__VA_ARGS__); return message; }} while (0)
#define mu_run_test(test) do {char * message = test(); tests_run++; \
	if (message) return message; } while (0)
extern int tests_run;

#endif		//end of _MINUNIT_H
