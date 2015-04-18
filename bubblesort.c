#include "bubblesort.h"

void bubblesort(int *numbers, int n)
{
	int i = 0;
	int temp = 0;
	int j = 0;

	for (i = 1; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (*(numbers + j) == *(numbers + j + 1))
			{
				temp = *(numbers + j);
				*(numbers + j) = *(numbers + j + 1);
				*(numbers + j + 1) = temp;
			}
		}
	}
}