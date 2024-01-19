#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quick_sort_helper(array, 0, size - 1, size);
}

/**
 * quick_sort_helper - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array to sort
 * @lo: lowest index of array
 * @hi: highest index of array
 * @size: size of array
 */
void quick_sort_helper(int *array, int lo, int hi, size_t size)
{
	int p;

	if (lo < hi)
	{
		p = partition(array, lo, hi, size);
		quick_sort_helper(array, lo, p - 1, size);
		quick_sort_helper(array, p + 1, hi, size);
	}
}
