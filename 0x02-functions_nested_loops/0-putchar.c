#include <stdio.h>
/**
 * main - prints _putchar, followed by a new line.
 * Return: 0 (Success)
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
