# Function Pointers
Like normal pointers, data pointers like (int *, char *), functions can also have pointers. And like arrays, function names, when used alone, decay to pointers. A function pointer points to code, not data, though. It points to the first line of code in the function.

A typical implementation of a function pointer is as follows:

```C
#include <stdio.h>

void func(int a)
{
    printf("The value of a is %d\n", a);
}

int main()
{
    // func_ptr is a pointer to function fun() 
    void (*func_ptr)(int) = &func;

    // Invoking func() using func_ptr
    (*func_ptr)(13);

    return 0;
}
```

With function pointers, you do not need to allocate and deallocate memory like you do for data pointers. Because function names decays to pointers, you can remove the address operator `&` and the dereference operator `*` when calling the function with pointers, and you'll get the same results.

## Array of function pointers

You can use these arrays in place of swich case to do different tasks based on a given condition. To create an array of function pointers, here's an example:

```C
char *(*strcpies[3])(char *, const char *) = { strcpy, strcpy, strcpy };

char *(*strcpies[])(char *, const char *) = { strcpy, strcpy, strcpy };

strcpies[0](dst, src);
```
* Array size is optional

## Function Pointers can be passed as arguments and returned as fuctions
You can pass a function pointer to a function as an argument. You can also return a function pointer from another function.


## These folder include the following files or programs:

- 0-print\_name.c - a function that prints a name
- 1-array\_iterator.c - a function that executes a funtion given a parameter ofn element of an array
- 2-int\_index.c - a function that searches for an integer
- 3-main.c, 3-op\_functions.c, 3-get\_op\_func.c, 3-calc.h - a program that performs simple operations
- 100-main\_opcodes.c - a program that prints the opcodes of its own main function
