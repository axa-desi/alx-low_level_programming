#include "main.h"

/**
  * main - entry point
  * @s: the strikng to reverse
  * @des: print string in reverse
  * Resturn: 0
  */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
s++;
_print_rev_recursion(s);
s--;
_putchar(*s);
}
