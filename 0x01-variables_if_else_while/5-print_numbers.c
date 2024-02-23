#include <stdio.h>


/**
 * main - Write a program that prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0.
 */

int main(void)
{
	char  number;
	
       for (number = 0; number <= 9; number++)
       {
		printf("%d", number);
       }
    	printf("\n");   
	return (0);
}
