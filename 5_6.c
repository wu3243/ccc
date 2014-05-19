#include <stdio.h>

void main()
{
	char ch;

	printf ("Enter a latter (a-z): ");
	scanf("%c", &ch);
	ch = ('a' <= ch && ch <= 'z')? (ch+'A'-'a'):ch;
	printf("The result is: %c", ch);
}