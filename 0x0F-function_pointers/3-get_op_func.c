#include <stddef.h>
#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - a function that selects the correct
 * function to perform the operation
 *
 * @s: the operator passed as argument to the function that
 * corresponds to the operator passed by the user
 *
 * Return: a pointer to the function selected
 */

op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	while (i < 5)
	{
		if (ops[i].op == s)
			return (*(ops[i].f));
		i++;
	}
	return (0);
}
