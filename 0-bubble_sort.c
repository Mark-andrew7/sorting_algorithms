#include "sort.h"
/**
 * bubble_sort - sorts array of int in ascending order
 * @array: contains values
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j, temp = 0;

if (size < 2)
return;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
print_array(array, size);
}
}
}
}