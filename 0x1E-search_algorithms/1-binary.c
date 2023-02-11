#include "search_algos.h"

/**
* recursive_search - searches for a value in an array of integers using the
* Binary search algorithm
*
* @array: input array
* @size: size of the array
* @value: value to search for
* Return: index of the number
*/
int recursive_search(int *array, size_t size, int value)
{
 	size_t half = size / 2
