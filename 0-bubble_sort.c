#include "sort.h"
/**
* bubble_sort - function that sorts an array of
* integers in ascending order
* @array: pointer to array
* @size: size of array
* Return: void
*
*/
void bubble_sort(int *array, size_t size)
{
	int i;
	int j;

	for (i = 0; i <= size - 2; i++)
	{
		for (j = 0; j <= size - 2; j++)
		{
			if (array[j] > array[j + 1])
			{
				int tmp = 0;

				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}
}
