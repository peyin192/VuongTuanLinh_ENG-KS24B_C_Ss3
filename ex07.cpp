#include <stdio.h>
int main(){
	int n,a,b,c,d,medium;
	
	printf("Nhap so nguyen co 4 chu so: ");
	scanf("%d",&n);
	
	a = n / 1000;
	b = (n / 100) % 10;
	c = (n / 10) % 10;
	d = n % 10;
	medium = a + b + c + d;
	
	printf("Tong la: %d", medium);
	
}
