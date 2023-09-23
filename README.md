# Readme - Sorting Algorithms & Big O Notation

This is an algorithm-based project implemented in the C programming language, created by **Ayomide Suara** and **Mohamed Ibrahima Traore** during their Full Stack Software Engineering studies at **ALX**. The project focuses on the implementation of various sorting algorithms and the analysis of their corresponding Big O notations.

## Table of Contents

- [Tests](#tests)
- [Helper Files](#helper-files)
- [Header Files](#header-files)
- [Tasks](#tasks)
- [Authors](#authors)

## Tests :heavy_check_mark:

- [tests](./tests): This folder contains test files used to validate the sorting algorithms.

## Helper Files :raised_hands:

- [print_array.c](./print_array.c): A C function that prints an array of integers.
- [print_list.c](./print_list.c): A C function that prints a `listint_t` doubly-linked list.

## Header Files :file_folder:

- [sort.h](./sort.h): This header file contains definitions and prototypes for all types and functions used in the project.

**Data Structure:**

```c
typedef struct listint_s {
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

**Function Prototypes:**

| File               | Prototype                                         |
| ------------------ | ------------------------------------------------- |
| `print_array.c`    | `void print_array(const int *array, size_t size)` |
| `print_list.c`     | `void print_list(const listint_t *list)`          |
| `0-bubble_sort.c`  | `void bubble_sort(int *array, size_t size);`      |
| `1-insertion_sort_list.c`  | `void insertion_sort_list(listint_t **list);` |
| `2-selection-sort.c`       | `void selection_sort(int *array, size_t size);` |
| `3-quick_sort.c`   | `void quick_sort(int *array, size_t size);`       |
| `100-shell_sort.c` | `void shell_sort(int *array, size_t size);`       |
| `101-cocktail_sort_list.c` | `void cocktail_sort_list(listint_t **list);` |
| `102-counting_sort.c`  | `void counting_sort(int *array, size_t size);` |
| `103-merge_sort.c` | `void merge_sort(int *array, size_t size);`       |
| `104-heap_sort.c`  | `void heap_sort(int *array, size_t size);`        |
| `105-radix_sort.c` | `void radix_sort(int *array, size_t size);`       |
| `106-bitonic_sort.c` | `void bitonic_sort(int *array, size_t size);`   |
| `107-quick_sort_hoare.c` | `void quick_sort_hoare(int *array, size_t size);` |

- [deck.h](./deck.h): This header file contains definitions and prototypes for types and functions used in the task `1000-sort_deck.c`.

**Data Structures:**

```c
typedef enum kind_e {
    SPADE = 0,
    HEART,
    CLUB,
    DIAMOND
} kind_t;

typedef struct card_s {
    const char *value;
    const kind_t kind;
} card_t;

typedef struct deck_node_s {
    const card_t *card;
    struct deck_node_s *prev;
    struct deck_node_s *next;
} deck_node_t;
```

**Function Prototype:**

| File               | Prototype                             |
| ------------------ | ------------------------------------- |
| `1000-deck_node.c` | `void sort_deck(deck_node_t **deck);` |

## Tasks :page_with_curl:

### 0. Bubble Sort

- **[0-bubble_sort.c](./0-bubble_sort.c)**: This C function implements the Bubble Sort algorithm to sort an array of integers in ascending order.
- It prints the array after each swap.
- **[0-O](./0-O)**: This text file contains the best, average, and worst-case time complexities of the Bubble Sort algorithm, with one complexity per line.

### 1. Insertion Sort

- **[1-insertion_sort_list.c](./1-insertion_sort_list.c)**: This C function uses the Insertion Sort algorithm to sort a `listint_t` doubly-linked list of integers in ascending order.
- It prints the list after each swap.
- **[1-O](./1-O)**: This text file contains the best, average, and worst-case time complexities of the Insertion Sort algorithm, with one complexity per line.

### 2. Selection Sort

- **[2-selection_sort.c](./2-selection_sort.c)**: This C function implements the Selection Sort algorithm to sort an array of integers in ascending order.
- It prints the array after each swap.
- **[2-O](./2-O)**: This text file contains the best, average, and worst-case time complexities of the Selection Sort algorithm, with one complexity per line.

### 3. Quick Sort

- **[3-quick_sort.c](./3-quick_sort.c)**: This C function uses the Quick Sort algorithm to sort an array of integers in ascending order.
- It implements the Lomuto partition scheme and always uses the last element of the partition as the pivot.
- It prints the array after each swap.
- **[3-O](./3-O)**: This text file contains the best, average, and worst-case time complexities of the Quick Sort Lomuto Partition scheme, with one complexity per line.

### 4. Shell Sort - Knuth Sequence

- **[100-shell_sort.c](./100-shell_sort.c)**: This C function implements the Shell Sort algorithm to sort an array of integers in ascending order.
- It uses the Knuth interval sequence and prints the array each time the interval is decreased.

### 5. Cocktail Shaker Sort

- **[101-cocktail_sort_list.c](./101-cocktail_sort_list.c)**: This C function uses the Cocktail Shaker Sort algorithm to sort a `listint_t` doubly-linked list of integers in ascending order.
- It prints the list after each swap.
- **[101-O](./101-O)**: This text file contains the best, average, and worst-case time complexities of the Cocktail Shaker Sort algorithm, with one complexity per line.

### 6. Counting Sort

- **[102-counting_sort.c](./102-counting_sort.c)**: This C function implements the Counting Sort algorithm to sort an array of integers in ascending order.
- It assumes that the array will only contain numbers greater than or equal to 0.
- It prints the counting array after it has been initialized.
- **[102-O](./102-O)**: This text file contains the best, average, and worst-case time complexities of the Counting Sort algorithm, with one complexity per line.

### 7. Merge Sort

- **[103-merge_sort.c](./103-merge_sort.c)**: This C function uses the Merge Sort algorithm to sort an array of integers in ascending order.
- It implements the top-down Merge Sort algorithm.
- When an array is divided

, the size of the left subarray is always less than or equal to the size of the right subarray.
- It always sorts the left subarray before the right one.
- It prints subarrays each time they are merged.
- **[103-O](./103-O)**: This text file contains the best, average, and worst-case time complexities of the Merge Sort algorithm, with one complexity per line.

### 8. Heap Sort

- **[104-heap_sort.c](./104-heap_sort.c)**: This C function implements the Heap Sort algorithm to sort an array of integers in ascending order.
- It uses the sift-down Heap Sort algorithm and prints the array after each swap.
- **[104-O](./104-O)**: This text file contains the best, average, and worst-case time complexities of the Heap Sort algorithm, with one complexity per line.

### 9. Radix Sort

- **[105-radix_sort.c](./105-radix_sort.c)**: This C function uses the Radix Sort algorithm to sort an array of integers in ascending order.
- It implements the Least-Significant-Digit (LSD) Radix Sort algorithm.
- It assumes that the array will only contain numbers greater than or equal to 0.
- It prints the array for each significant digit increase.
- **[105-O](./105-O)**: This text file contains the best, average, and worst-case time complexities of the Radix Sort algorithm, with one complexity per line.

### 10. Bitonic Sort

- **[106-bitonic_sort.c](./106-bitonic_sort.c)**: This C function implements the Bitonic Sort algorithm to sort an array of integers in ascending order.
- It assumes that the size is a power of 2 (i.e., `size` can be expressed as `2^k` where `k >= 0`).
- It prints subarrays each time they are merged.
- **[106-O](./106-O)**: This text file contains the best, average, and worst-case time complexities of the Bitonic Sort algorithm, with one complexity per line.

### 11. Quick Sort - Hoare Partition Scheme

- **[107-quick_sort_hoare.c](./107-quick_sort_hoare.c)**: This C function uses the Quick Sort algorithm with the Hoare partition scheme to sort an array of integers in ascending order.
- It always uses the last element of the partition being sorted as the pivot.
- It prints the array after each swap.
- **[107-O](./107-O)**: This text file contains the best, average, and worst-case time complexities of the Quick Sort Hoare Partition scheme, with one complexity per line.

### 12. Dealer

- **[1000-sort_deck.c](./1000-sort_deck.c)**: This C function sorts a `deck_node_t` doubly-linked list of cards, assuming there are exactly 52 elements in the list.
- It orders the deck from spades to diamonds and from aces to kings.
