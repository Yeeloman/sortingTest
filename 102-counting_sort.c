#include "sort.h"
#include <stdlib.h>

/**
 *minMax - find the min and max values
 *@array: array
 *@size: size of the array
 *@min: min value
 *@max: max value
 */

void minMax(int *array, size_t size, int *min, int *max)
{
	int i = 1;

	*min = *max = array[0];
	for (; i < (int)size; i++)
	{
		if (array[i] < *min)
			*min = array[i];
		else if (array[i] > *max)
			*max = array[i];
	}
}
/**
 *counting_sort - couunting sort algorithm
 *@array: array
 *@size: size of the array
 */

void counting_sort(int *array, size_t size)
{
	int min, max, idx, i;
	int *count_array, *output_array;
	int range;

	if (!array || size == 0)
		return;
	minMax(array, size, &min, &max);
	range = max - min + 1;
	count_array = malloc(range * sizeof(int));
	output_array = malloc(size * sizeof(int));
	if (!count_array || !output_array)
	{
		free(count_array);
		free(output_array);
		return;
	}
	for (i = 0; i < range; i++)
		count_array[i] = 0;
	for (i = 0; i < (int)size; i++)
	{
		idx = array[i] - min;
		count_array[idx]++;
	}
	for (i = 1; i < range; i++)
		count_array[i] += count_array[i - 1];
	print_array(count_array, range);
	for (i = size - 1; i >= 0; i--)
	{
		idx = array[i] - min;
		output_array[count_array[idx] - 1] = array[i];
		count_array[idx]--;
	}
	for (i = 0; i < (int)size; i++)
		array[i] = output_array[i];
	free(count_array);
	free(output_array);
}
