#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
^I^Ichar c;

^I^Ic = 'A';
^I^Iprintf("%c: %d\n", c, _isupper(c));
^I^Ic = 'a';
^I^Iprintf("%c: %d\n", c, _isupper(c));
^I^Ireturn (0);
}
