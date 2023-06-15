#0x0c: C - More malloc, free

`malloc` function can also be used to substitute calloc and realloc. The functions in this folder will demonstrate how to do so.

## Calloc

`calloc` function allocates a memory block to an array of a given number of elements and the size ofone element. Its prototype is `void *calloc(size_t nmemb, size_t size);` where `nmemb` is the number of array elements of `size` bytes each.

To use malloc to achieve the same, you would run the following: `malloc(nmemb * size);`. However, in contrast to calloc, malloc will not throw an error incase of integer overflow, which may result in an incorectly sized memory block.

## Realloc

`realloc` function changes the size of a memory block pointed by a given pointer. Its prototype is `void *realloc(void *ptr, size_t size);` where `ptr` is the pointer and `size` is the new size of the memory block. If the new size is bigger than the old size of `ptr`, the new memory block will not be initialized. If new size is equal to the old size, no changes will be made. If `ptr` is `NULL`, then the call is equivalent to `malloc(new_size);` If the new size is `0` and `ptr` is not `NULL`, then the call is equal to `free(ptr);`.

## exit(int status)
`exit` function causes normal process termination and returns the status, which is an `int`, to the parent"

This folder includes the following functions or programs:

- 0-malloc_checked.c - a function that allocated memory using malloc and cause normal process termination with status value of `98` on `malloc` failure
- 1-string_nconcat.c - a function that concatenates two strings and returns a pointer to newly allocated memory containing `s1` contents and first `nbytes` of `s2`, null terminated.
- 2-calloc.c - a function that allocates memory for an array using `malloc`.
- 3-array_range.c - a function that allocates memory for an array of integers from a range.
- 100-realloc.c - a function that acts as `realloc` function using `malloc` and `free`.
