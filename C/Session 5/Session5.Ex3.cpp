#include<stdio.h>
int main() {
    int number, number_n = 0;
    printf("Ban Hay Nhap 1 So Nguyen Duong Bat Ky: ");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++) {
    number_n += i;
    }
    printf("Tong Tu 1 Den %d La: %d\n", number, number_n);
return 0;
}

