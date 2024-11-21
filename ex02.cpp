#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Nhap nhiet do theo Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;

    printf("%.2f tuong ung voi %.2f do fahrenheit.\n", celsius, fahrenheit);
    return 0;
}
