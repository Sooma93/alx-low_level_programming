#include <stdio.h>

void firts(void) __attribute__ ((constructor));
/**
 * first - print before main func
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
