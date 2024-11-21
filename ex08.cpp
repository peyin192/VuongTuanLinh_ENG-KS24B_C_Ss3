#include <stdio.h>
int main(){
	int n,a,b,c,d,reverse;
	
	printf("Nhap so nguyen co 4 chu so: ");
	scanf("%d",&n);
	
	a = n / 1000;
	b = (n / 100) % 10;
	c = (n / 10) % 10;
	d = n % 10;
	reverse = d * 1000 + c * 100 + b * 10 + a;
	
	printf("Tong la: %d", reverse);
	return 0;
	
	
}
