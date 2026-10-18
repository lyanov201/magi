//Четное не четное 
#include <stdio.h>

int main() {
	int number;
	scanf("%d", &number);
	
	if (number % 2 == 0) {
		number = 0;
	} else {
		number = 1;
	}
	
	return 0;
}
