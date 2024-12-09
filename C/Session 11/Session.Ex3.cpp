#include<stdio.h>
int giaithua(int n){
    int result = 1;
    for(int i = 1; i <= n; i++){
    result *= i;
    }
    return result;
}
int main() {
int number;
printf("Ban Hay Nhap 1 So Nguyen: ");
scanf("%d", &number);
printf("Giai Thua Cua %d Là: %d\n", number, giaithua(number));
return 0;
}
