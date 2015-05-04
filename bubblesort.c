#include<stdio.h>
#include<time.h>
#include "bubblesort.h"

void bubblesort(int *numbers, int n)
{
	int i = 0;
	int temp = 0;
	int j = 0;

	for (i = 0; i < (n - 1); i++)
	{
		for (j = 0; j < (n - i - 1); j++)
		{
			if (*(numbers + j) > *(numbers + j + 1))
			{
				temp = *(numbers + j);
				*(numbers + j) = *(numbers + j + 1);
				*(numbers + j + 1) = temp;
			}
		}
	}
}

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int i = 0;

	// generate n random numbers where n is based on user input
	srand(time(NULL));
	int *randomNumbers = malloc(sizeof(int)*n);
	for (i = 0; i < n; i++)
	{
		*(randomNumbers + i) = rand();
	}

	bubblesort(randomNumbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d\n", *(randomNumbers + i));
	}

	return 0;
}
