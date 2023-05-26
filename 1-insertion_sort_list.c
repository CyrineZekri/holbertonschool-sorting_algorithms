#include "sort.h"
/**
 * insertion_sort_list - sorting algorithm
 * @list: The list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *first, *last, *tmp;

    if (!list || !*list)

        return;

    last = (*list);

    first = (*list)->next;

    while (first)

    {

        while (last && first->n < last->n)

        {

            if (last->prev)

                last->prev->next = first;

            else

                *list = first;

            if (first->next)

                first->next->prev = last;

            tmp = first->next;

            first->next = last;

            first->prev = last->prev;

            last->next = tmp;

            last->prev = first;

            print_list(*list);

            last = first->prev;
        }

        first = first->next;

        if (first)

            last = first->prev;
    }
}