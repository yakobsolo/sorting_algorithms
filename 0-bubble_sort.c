#include "sort.h"
/**
* bubble_sort - sorts array of integers in ascending order
* @array: array to be sorted
* @size: size of array
*
*/
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t temp;
	int flag = 1;

	if (size < 2)
	{
		return;
	}
	while (flag)
	{
		flag = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				flag = 1;
				print_array(array, size);
			}
		}
	}
}
