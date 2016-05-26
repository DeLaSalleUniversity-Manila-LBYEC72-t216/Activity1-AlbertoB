#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float ba,he,area;
	
	printf("\nInput Base of Triangle: ");
	scanf("%f",&ba);
	printf("\nInput Height of Triangle: ");
	scanf("%f",&he);
	
	area=ba*he*1/2;
	
	printf("\n\nThe Area of the triangle is:  %.2f",area);
	

	return 0;
}
