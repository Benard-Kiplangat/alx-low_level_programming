# Dynamic Memory allocation with malloc

Unlike automatic memory allocation, like when you declare variables or you use strings in double quotes, dynamic memory allocation allows you to allocate memory during runtime.

The best scenario to allocate memory dynamically is when you do not know the size of the variable you want to declare. For example, an array that depends on another variable. Since you can declare arrays with only integer constants, the following example will not work:

```C
int n;

n = 10;

int intarray[n] /* Will not work */

```

## malloc

The function `malloc()` in C is a used to allocate a number of bytes on the heap. This function returns a void pointer available in the standard library. stdlib.h. Here is the decraration of the function:

```C
#include <stdlib.h>

void *malloc(size_t size); /* size is the number of bytes to allocate */
void  *p = malloc(4);
```

*Note:*
- malloc does not initialize the memory for you. So, if you access the block without initializing it, you'll get garbage values.
- Consider using `sizeof(type) * units` like (sizeof(int) * 4) to create a block of memory enough for 4 integers. This is a best practice as different system and compilers allocate different sizes for a type.
- If you need to use the returned pointer for a specific type, you should typecast it, as it is a void pointer. 

### What if malloc fails?

When a memory allocation function fails, it returns `NULL`. Therefore, you should check if the requested memory block was successfully allocated or not before using it in your program.

To do so, simply check if the return value is `NULL`, and if not, proceed. That is, you can implement it this way:

```C
if (*ptr != NULL) /* ptr is the pointer to the memory you requested */
{
	... /* use the allocaated memory */
}
else
{
/* handle the failure */
printf("The memory could not be allocated\n");
}
```

## free

The function `free()` deallocates the memory that was previously allocated to you by malloc (or calloc and realloc). Sometimes, memory allocation fails, and `free` should free the memory that must have been returned by malloc, calloc or realloc.

The freed memory, that you no longer needed will be returned to the operating system for other uses.

Its diclaration is as follows:

```C
#include <stdlib.h>

void free(void *ptr); /* ptr is a pointer to the allocated memory */

free(ptr); /* using free function */
```

## How to use Valgrind to check for memory leaks

[Valgrind](valgrind.org) is an instrumentation framework for building dynamic analysis tools. Valgrind tools can automatically detect many memory management and threading bugs, and profile your programs in detail.

Thus, when writing big and complex programs, it can help you keep track of allocated and deallocated memory blocks that leads to better and effective programs. And to use Valgrind is easy, install Valgrind on your system, then call `valgrind ./yourprog` to test your memory.
