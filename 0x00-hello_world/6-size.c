#include<stdio.h>
/**
 * main - prize the size of data types
 *
 * Return: 0
 */
int main(void)
{
	char charx;
	int inty;
	long int longintz;
	long long int longlonginta;
	float floatb;

printf("Size of a char: %lu byte(s)\n", 
		(unsigned long)sizeof(charx));
printf("Size of an int: %lu byte(s)\n", 
		(unsigned long)sizeof(inty));
printf("Size of a long int: %lu byte(s)\n", 
		(unsigned long)sizeof(longintz));
printf("Size of a long long int: %lu byte(s)\n", 
		(unsigned long)sizeof(longlonginta));
printf("Size of a float: %lu byte(s)\n", 
		(unsigned long)sizeof(floatb));
return (0);
}
