# ALX-Low-Level-Programming - Recursion

This repo is a new project to help me understand recursion. Specifically, I seek to undeerstand the following questions:

* What is recursion?
* How can I implement recursion in programming?
* In what situations can I implement recursion?
* In what situations shouldn't I implement recursion?

## What is recursion?

Recursion is doing anything repeatedly, in a self-similar way. In programming, it is calling a function within itself.

## How do you implement recursions?

To implement recursion, you write a function and call it within its body. However, that creates an endless calls that will definitely crash your system. So, you need to define an exit condition to stop the infinite loop.

Here's the basic syntax for a recursive function in C:
```
void recusion()
{
	if (base-condition)
		return smth;
	recursion();
}

int main()
{
	recursion();
	return 0;
}
```
## Which situations should you use recursion?

Recursion is a powerful tool that has several use cases. For example, you can use it to solve mathematical problems like factorial and fibonacci series generation. 

Here's how an example of using recursion to calculate a factorial of a number in C:
```
#include <stdio.h>

unsigned long int factorial(unsigned int n)
{
	if (n <= 0)
	{
		return (1);
	}
	else
		return n * factorial(n - 1);
}

int main(void)
{
	int num = 10;
	printf("%ld is the factorial of %d\n", factorial(num), num);
	return (0);
}
```
