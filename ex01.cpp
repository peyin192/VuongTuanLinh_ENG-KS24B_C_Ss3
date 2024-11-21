#include <stdio.h>

int main() {
    char name[101];
    printf("Nhap ten: ");
    fgets(name, sizeof(name), stdin);
    printf("Xin chao %s", name);

}
