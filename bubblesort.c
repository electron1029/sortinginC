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