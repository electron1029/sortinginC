#include "quicksort.h"

void quicksort(int *numbers, int start, int end)
{
	int left = 0;
	int right = 0;
	int pivot = 0;
	int temp = 0;

	if (start < end)
	{
		left = start;
		right = end;
		pivot = start;

		while (left <= right)
		{
			while (*(numbers + left) < *(numbers + pivot))
			{
				left++;
			}

			while (*(numbers + right) > *(numbers + pivot))
			{
				right--;
			}

			if (left <= right)
			{
				temp = *(numbers + left);
				*(numbers + left) = *(numbers + right);
				*(numbers + right) = temp;
				left++;
				right--;
			}
		}
		quicksort(numbers, start, right);
		quicksort(numbers, left, end);
	}
}