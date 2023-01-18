#include <stdio.h>
#include <stdlib.h>
/**#ifndef FILE
*#define file __FILE__
*#endif
*/
/**
 * main - print the name of the file
 *Return: 0
 *
 */
void main(void)
{
	printf("compiled by: %s\n", __FILE__);
}
