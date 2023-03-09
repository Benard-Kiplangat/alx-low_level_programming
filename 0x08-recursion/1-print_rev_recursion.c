#include "main.h"
  
 /** 
   * _print_rev_recursion - a function to print a string in reverse 
   * @s: string to be reversed 
   * Return: void 
   */ 
  
 void _print_rev_recursion(char *s) 
{
         if (*s)
         { 
                 _print_rev_recursion(s + 1); 
                 _putchar(*s); 
         } 
 }
