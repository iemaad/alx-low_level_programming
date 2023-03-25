#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints if number is positive, zero or negative
 * Return: Always (Success)
 */


int main(void)

{
       	int n;
	printf("size of a char : %zu byte(s)\n", sizeof(char));
        srand(time(0));
        n = rand() - RAND_MAX / 2;

        printf("%d is ", n);

        if (n > 0)
	{
		printf("positive\n");
	}
	else if (n == 0)
	{
		printf("zero\n");
	}
	else
	{
		printf("negative\n");
	}
	return (0);
}
