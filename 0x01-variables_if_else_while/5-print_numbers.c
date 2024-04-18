#include <stdio.h>

/**
 * main - prints number in bas 10 starting from 0
 *
 * Return: 0
 */

int main(void)
{
	char number;

	for (number = 0; number <= 9; number++)
	{
		printf("%d", number);
	}
	printf("\n");
	return (0);
}
