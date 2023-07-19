#include "main.h"
#include <unistd.h>

int main(void)
{
	char c = '_';

	write(1, &c,1);
	write(1, "putchar\n", 8);

	return 0;
}
