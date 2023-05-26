#include "sort.h"
/**
 * insertion_sort_list - sorting algorithm
 * @list: The list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *sorted, *current, *next, *aux, *temp;

    sorted = NULL;
    current = *list;

    while (current != NULL)
    {
        next = current->next;

        if (sorted == NULL || sorted->n > current->n)
        {
            current->next = sorted;
            sorted = current;
        }
        else
        {
            aux = sorted;

            while (aux->next != NULL && aux->next->n <= current->n)
                aux = aux->next;

            if (aux->next == NULL)
            {
                aux->next = current;
                current->prev = aux;
                current->next = NULL;
                print_list(*list);
            }
            else
            {
                temp = aux->next;
                aux->next = current;
                current->prev = aux;
                current->next = temp;
                temp->prev = current;
            }
            print_list(*list);
        }

        current = next;
    }

    *list = sorted;
    print_list(*list);
}
