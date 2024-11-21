#include <stdio.h>
int main(){
	float a,b,area;
	printf("Nhap do dai canh cua tam giac: ");
	scanf("%f",&a);
	
	printf("Nhap chieu cao cua tam giac: ");
	scanf("%f",&b);
	
	area = (a * b) / 2;
	
	printf("Dien tich tam giac la: %f", area);
	
	return 0;
}
