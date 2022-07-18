#include "sort.h"
/**
 * selection_sort - sorts an array of integersin ascendign order
 * @array: wating for array of integers
 * @size: waiting for size of an array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, curritem, currmin;
	int temp;

	if (array == NULL && size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		currmin = i;
		for (curritem = i + 1; curritem < size; curritem++)
		{
			if (array[curritem] < array[currmin])
			{
				currmin = curritem;
			}
		}
		if (currmin != i)
		{
			temp = array[i];
			array[i] = array[currmin];
			array[currmin] = temp;
			print_array(array, size);
		}
	}
}
