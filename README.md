# sorting_algorithms

Implementation of sorting algorithms in C.

## Insertion Sort

In this code, the insertion_sort_list function implements the insertion sort algorithm to sort a doubly linked list. Here's a summary of the main steps:

1. Check if the list is empty or has only one element. If so, there's nothing to sort, so return.
2. Start sorting from the second element in the list.
3. Iterate through the unsorted portion of the list.
4. For each element in the unsorted portion, compare it with the elements in the sorted portion (iterate backwards).
5. If the element is smaller than the previous element, swap it with the previous element by adjusting the links.
6. Continue swapping until the element is in its correct sorted position.
7. Update the head of the list if necessary.
8. Print the current state of the list after each swap.
9. The comments provide additional explanations for each step in the code.
