#include "search_algos.h"

/**
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for
 * Return: the index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	return (binary_search_index(array, 0, size - 1, value));
}

/**
 * @array: pointer to the first element of the array to search in.
 * @l: left index of array.
 * @r: right index of array.
 * @value: value to look for.
 * Return: the index where value is located.
 */
int binary_search_index(int *array, size_t l, size_t r, int value)
{
	int mid;

	/* if l is ever > r, it means the element is not in the array */
	if (!array || l > r)
		return (-1);
	print_array(array, l, r);

	/* find the mid-way index between index l and index r */
	mid = l + (r - l) / 2;

	if (l == r)
		return (*(array + mid) == value ? (int)mid : -1);

	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (binary_search_index(array, l, mid - 1, value));
	else
		return (binary_search_index(array, mid + 1, r, value));
}

/**
 * @array: The array to be printed.
 * @l: The left index of the array.
 * @r: The right index of the array.
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	if (array)
	{
		printf("Searching in array: ");
		for (i = l; i < l + (r - l + 1); i++)
			printf("%d%s", *(array + i), i < l + (r - l) ? ", " : "\n");
	}
}
