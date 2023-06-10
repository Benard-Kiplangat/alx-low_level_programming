# argc and argv
`int argc` and `char *argv[]` are arguments of the main function in C. They allow you to pass information to the program through the command line. `argc` includes the total number of arguments passed into the program, including the program's name. 

`*argv[]` is a null pointer to all the arguments as strings, with `*argc[0]` as the name of the program. When passed to the program, a null pointer to the address of the first element is passed. Therefore, it can also be represented as `char **argv` argument to the main.

The typical implementation of `argc` and `argv` is like the following:
```
int main(int argc, char *argv[])
```
From there, your program can recieve your command line arguments, like the following:
```
./myprogram a b c
```
	where ./myprogram, a, b, and c are arguments captured in argv and 4 is the total number of arguments passed as argc

The programs in this folder include the following:
* 0-whatsmyname.c - a program that prints its name followed by newline.
* 1-args.c - a program that prints the number of arguments passed into it.
* 2-args.c - a program that prints all arguments it recieves.
* 3-mul.c - the program that multiplies two numbers.
* 4-add.c - a program that adds positive numbers.
* 100-change.c - a program that prints the minimum number of coins to make change for an ammount of money.
