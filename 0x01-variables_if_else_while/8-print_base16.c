#include <stdio.h>
/**
* main -Entry
*
* Return: 0
*/

int main(void)
{
int num = 48;
int alpha = 97;

for (; num <= 57; num++)
	putchar(num);
for (; alpha <= 102; alpha++)
	putchar(alpha);
putchar(10);

return (0);
}
