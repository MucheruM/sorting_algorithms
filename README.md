*0x1B. C - Sorting algorithms & Big O*

**Overview**
This collaborative project by Alexandre Gautier and Mucheru Maina delves into
sorting algorithms and the principles of Big O notation.
Spanning from Jan 17, 2024, 6:00 AM, to Jan 24, 2024, 6:00 AM, with a
checker released on Jan 19, 2024, 12:00 AM, an auto review will be conducted
at the deadline.

**Background Context**
Explore and implement various sorting algorithms, supported by resources
such as sorting algorithm documentation, Big O notation, sorting algorithm
animations, and detailed algorithm explanations by David Malan from CS50.

**Learning Objectives**
Upon completion, participants should:

Understand at least four sorting algorithms.
Grasp Big O notation and evaluate time complexity.
Select appropriate sorting algorithms for different inputs.
Recognize stable sorting algorithm characteristics.

**Requirements**

***General***
- Allowed editors: vi, vim, emacs
- Compilation on Ubuntu 20.04 LTS using gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line.
- A README.md file at the root of the project folder is mandatory.
- Code should adhere to the Betty style.
- No use of global variables.
- No more than 5 functions per file.
- Unless specified otherwise, the standard library is not allowed.
- Prototypes of all functions should be included in the header file called sort.h.
- Header files should be include guarded.

***Data Structure and Functions***
For this project, you are given the following functions:

`void print_array(const int *array, size_t size);`
`void print_list(const listint_t *list);`

You are also provided with a doubly linked list structure:
`typedef struct listint_s`
`{`
`   const int n;`
`    struct listint_s *prev;`
`    struct listint_s *next;`
`} listint_t;`

**Big O Notations**
Participants are required to provide the Big O notations for the time complexity
of the sorting algorithms in the files 0-O, 1-O, 2-O, and 3-O, with 1 notation
per line for the best case, average case, and worst case.

*Tasks*
**Task 0: Bubble sort**
Write a function void bubble_sort(int *array, size_t size) that sorts an
array of integers in ascending order using the Bubble sort algorithm.
Print the array after each time two elements are swapped.

**Task 1: Insertion sort**
Write a function void insertion_sort_list(listint_t **list) that sorts a
doubly linked list of integers in ascending order using the Insertion sort
algorithm. Print the list after each time two elements are swapped.

**Task 2: Selection sort**
Write a function void selection_sort(int *array, size_t size) that sorts an
array of integers in ascending order using the Selection sort algorithm.
Print the array after each time two elements are swapped.

**Task 3: Quick sort**
Write a function void quick_sort(int *array, size_t size) that sorts an
array of integers in ascending order using the Quick sort algorithm with
the Lomuto partition scheme. Print the array after each time two elements are swapped.

**GitHub Repository**
One project repository per group. Cloning, forking, or duplicating a
project repository with the same name before the second deadline will result in a 0% score.

***Testing***
A quick tip for testing sorting algorithms with large sets of random integers: Random.org.
