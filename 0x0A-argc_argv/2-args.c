#include <stdio.h>

/**
 * main- Entry point
 * Description: Function
 * @argc: Input variable
 * @argv: Input variable 2
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);

}

