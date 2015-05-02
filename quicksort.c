#include "quicksort.h"

void quicksort(int *numbers, int left, int right)
{
	int i = 0;
	int *last;

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

	int temp;

	temp = *(numbers + left);
	*(numbers + left) = *last;
	*last = temp;

	quicksort(numbers, left, last - numbers);
	quicksort(numbers, last - numbers + 1, right);
}