#include <stdio.h>
/**
 * before - function runs before main is executed.
 */
void __attribute__ ((constructor)) before(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
