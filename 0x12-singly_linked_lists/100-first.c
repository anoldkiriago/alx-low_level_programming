#include <stdio.h>

void start_up(void) __attribute__ ((constructor));

/**
 * start_up - Entry point
 * my function is tbe executed
 */
void start_up(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
