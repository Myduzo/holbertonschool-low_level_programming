#include "lists.h"
#include <stdio.h>
/**
* myStartup - a function that prints before main.
*
*/
void myStartup(void) __attribute__ ((constructor));
/**
* myStartup - a function that prints before main.
*
*/
void myStartup(void)
{
printf("You're beat! and yet, you must allow,\n
I bore my house upon my back!\n");
}
