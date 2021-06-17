#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* print functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* bubble sort */
void bubble_sort(int *array, size_t size);

/* insertion sort */
void insertion_sort_list(listint_t **list);

/*selsction sort */
void selection_sort(int *array, size_t size);

/* quick sort */
void swap(int *a, int *b);
int partition_lomuto(int *array, int start, int end, size_t size);
int partition_hoare(int *array, int start, int end, size_t size);
void quickSort(int *array, int start, int end, size_t size);
void quick_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

/* shell sort */
void shell_sort(int *array, size_t size);

#endif
