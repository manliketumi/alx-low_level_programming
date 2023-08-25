#include <stdio.h>
/**
 * before_main - print a message before the main
 * description: function marked with the contructor attribute
 * @__attribute__: executor
 */
void __attribute__ ((constructor))
before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
