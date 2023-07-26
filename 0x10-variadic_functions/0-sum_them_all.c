#include "variadic_function.h"
#include <stdarg.h>

/**
 * sum_them_all-Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function
 * @...:A variable number of paramers to calculate the sum of
 *
 * Return: if n==0-0
 *    Otherwise - the sum of all paramers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap,n);

	for(i=0,i<n,i++)
		sum +=va_arg(ap,int);
	va end(ap);

	return (sum);
}
