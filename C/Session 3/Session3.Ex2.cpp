#include<stdio.h>
int main(){
    float doC;
    printf("Ban Hay Nhap Nhiet Do C: ");
    scanf("%f", &doC);
    float doF;
    doF = doC * 1.8 + 32;
    printf("Nhiet Do %.2f C Bang %.2f F \n", doC, doF);
    return 0;
}
