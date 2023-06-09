# argc and argv
`int argc` and `char *argv[]` are arguments of the main function in C. They allow you to pass information to the program through the command line. An example include the following:
* ./myprog a b c

a, b, and c are examples of the arguments of the gcc command. The typical implementation of `argc` and `argv` is like the following:
```
#include <stdio.h>

int main(int argc, char *argv[])
{
	...
	return 0;
}
```

The programs in this folder include the following:
* 0-whatsmyname.c - a program that prints its name followed by newline.
* 1-args.c - a program that prints the number of arguments passed into it.
* 2-args.c - a program that prints all arguments it recieves.
* 3-mul.c - the program that multiplies two numbers.
* 4-add.c - a program that adds positive numbers.
* 100-change.c - a program that prints the minimum number of coins to make change for an ammount of money.
