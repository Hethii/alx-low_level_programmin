#include "lists.h"

/**
 * listint_len - a function that returns the number of elements.
 *
 * @h: pointer to the first node
 *
 * Return: number
 */

size_t listint_len(const listint_t *h)
{
	size_t number = 1;

	/*return 0 as number when h is NULL*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		/*count no of number*/
		if (h->n != '\0')
			number++;

		/*go to next node*/
		h = h->next;
	}

	return (number);
}
