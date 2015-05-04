#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include "quicksort.h"

void quicksort(int *numbers, int left, int right)
{
	int i = 0;
	int *last;
	int temp;

	if (right <= left)
	{
		return;
	}
	
	last = numbers + left; 

	for (i = left + 1; i < right; i++)
	{
		if (*(numbers + i) < *(numbers + left))
		{
			int temp;

			last++;

			temp = *last;
			*last = *(numbers + i);
			*(numbers + i) = temp;
		}
	}

	temp = *(numbers + left);
	*(numbers + left) = *last;
	*last = temp;

	quicksort(numbers, left, last - numbers);
	quicksort(numbers, last - numbers + 1, right);
}

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int i = 0;
	int *randomNumbers = malloc(sizeof(int)*n);

	// generate n random numbers where n is based on user input
	srand(time(NULL));
	
	for (i = 0; i < n; i++)
	{
		*(randomNumbers + i) = rand();
	}

	
	quicksort(randomNumbers, 0, n);
	

	for (i = 0; i < n; i++)
	{
		printf("%d\n", *(randomNumbers + i));
	}

	return 0;
}
