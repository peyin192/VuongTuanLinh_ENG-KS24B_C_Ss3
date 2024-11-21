#include <stdio.h>

int main(){
	int pi = 3.14;
	float n,circumference,area;
	printf("Nhap ban kinh hinh tron: ");
	scanf("%f", &n);
	circumference = 2 * n * 3.14;
	area  = 4 * n * 3.14;
	
	printf("Chu vi hinh tron la: %f",circumference );
	printf("Dien tich hinh tron la: %f",area);
	return 0;
	
}
