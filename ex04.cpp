#include <stdio.h>
int main(){
	float mthscr,ltrscr,engscr,medium;
	printf("Nhap diem toan: ",mthscr);
	scanf("%f", &mthscr);
	
	printf("Nhap diem van: ",ltrscr);
	scanf("%f",&ltrscr );
	
	printf("Nhap diem anh: ",engscr);
	scanf("%f",&engscr);
	
	medium = (mthscr + ltrscr + engscr) / 3;
	
	printf("Diem trung binh: %.3f",medium);
	return 0;

}
