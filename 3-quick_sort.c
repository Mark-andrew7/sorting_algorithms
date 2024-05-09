#include "sort.h"
#include <stdio.h>

/**
 * quick_sort - Sorts an array of integers in ascending order using
 *              the Quick sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;

quicksort(array, 0, size - 1, size);
}

/**
 * partition - Lomuto partition scheme
 * @array: The array to be partitioned
 * @low: The low index of the partition
 * @high: The high index of the partition
 * @size: The size of the array
 *
 * Return: The partition index
 */
int partition(int *array, int low, int high, size_t size)
{
int pivot = array[high];
int i = low - 1;
int j;

for (j = low; j <= high - 1; j++)
{
if (array[j] < pivot)
{
i++;
swap(&array[i], &array[j]);
print_array(array, size);
}
}
swap(&array[i + 1], &array[high]);
print_array(array, size);
return (i + 1);
}

/**
 * quicksort - Quick sort implementation
 * @array: The array to be sorted
 * @low: The low index of the partition
 * @high: The high index of the partition
 * @size: The size of the array
 */
void quicksort(int *array, int low, int high, size_t size)
{
if (low < high)
{
int pi = partition(array, low, high, size);

quicksort(array, low, pi - 1, size);
quicksort(array, pi + 1, high, size);
}
}

/**
 * swap - Swaps two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */
void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
