#include "function_pointers.h"

/**
  * array_iterator - executes a function on each element of array
  * @array: an integer array we are executing function on
  * @size:size of integer array
  * @action: function pointer that takes an integer
  *
  * Return: ...
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
