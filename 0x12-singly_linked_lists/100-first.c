#include <stdio.h>
/**
 * before_main - print a message
 * __attribute__ - entry point
 */
void __attribute__ ((constructor))
before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
