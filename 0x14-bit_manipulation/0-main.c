#include "main.h"
#include "stdio.h"

int main(void)
{
	unsigned int n;

	n = binary_to_uint("1");
	printf("%u\n", n);
	n = binary_to_uint("101");
	printf("%u\n", n);
	n = binary_to_uint("00000000000110010010");
	printf("%u\n", n);
	n = binary_to_uint("1100010");
	printf("%u\n", n);
	return (0);
}
