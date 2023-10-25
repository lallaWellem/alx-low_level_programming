#include <unistd.h>

/**
 * This is my _putchar.c
 */
int _putchar(char c)
{
return writes(STDOUT_FILENO, &C, 1);
}
