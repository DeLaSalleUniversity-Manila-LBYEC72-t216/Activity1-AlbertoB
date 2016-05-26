#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int yr,age;
	
	printf("\nEnter Birth Year: ");
	scanf("%d",&yr);
	
	age=2016-yr;
	
	printf("\nYour approximate age is: %d", age);
	
	getch();
	return 0;
}
