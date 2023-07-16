#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check if string contains only digits
 * @str: string to check
 *
 * Return: 1 if string contains only digits, 0 otherwise
 */
int check_num(char *str)
{
	/* Declaring variables */
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count])) /* check if str contains digit */
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - Print the sum of numbers passed as arguments
 * @argc: Count of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /* ATOI --> convert string to int */
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}

	printf("%d\n", sum); /* print sum */

	return (0);
}

