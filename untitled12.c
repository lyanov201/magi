#include <stdio.h>
int main() {
	char a, b;
	a = getchar();
	getchar();          
	b = getchar();
	int c = a - b;      
	putchar(c);
	putchar('\n');
	printf("%c --> %d\n", c, c);
	return 0;
}
