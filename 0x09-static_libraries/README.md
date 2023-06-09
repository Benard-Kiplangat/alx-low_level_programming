## Static library libmy.a
The first task involves creating a libmy.a static library. This library will contain all the following functions:
* int _putchar(char c);
* int _islower(int c);
* int _isalpha(int c);
* int _abs(int n);
* int _isupper(int c);
* int _isdigit(int c);
* int _strlen(char *s);
* void _puts(char *s);
* char *_strcpy(char *dest, char *src);
* int _atoi(char *s);
* char *_strcat(char *dest, char *src);
* char *_strncat(char *dest, char *src, int n);
* char *_strncpy(char *dest, char *src, int n);
* int _strcmp(char *s1, char *s2);
* char *_memset(char *s, char b, unsigned int n);
* char *_memcpy(char *dest, char *src, unsigned int n);
* char *_strchr(char *s, char c);
* unsigned int _strspn(char *s, char *accept);
* char *_strpbrk(char *s, char *accept);
* char *_strstr(char *haystack, char *needle);

First, to create a list of object files, compile each file with gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c note the -c flag, and *.c to highligh all the c files.
Next, create the static library with the command ar rc libutil.a. The flag c tells the compiler to create the library if there is none and r to recreate if new files are available.
Finally, index the library with the command ranlib libmy.a to speed up the time it takes to find symbols(variables, functions, and others) in the library.

## How to use the static library?
To use this library in your project, use the command below when compiling new files: gcc main.o -L. -lmy -o prog. This main.o is your new object file that you need to add to your library and build your program.

Notice that -L. flag means you are asking the compiler to find the library in the current directory. You also do not need to include lib and the extension .a in -lmy as the compiler will expand it automatically. The -l allows you to use the library archive in your program.

