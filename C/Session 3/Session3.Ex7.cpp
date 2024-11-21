#include<stdio.h>
int main(){
int number;
printf("Ban Hay Nhap So Nguyen Co 4 Chu So: ", number);
scanf("%d", &number);
int tong;
tong = (number / 1000) + (number / 100 % 10) + (number / 10 % 10) + (number % 10);
printf("Tong Cac Chu So Cua So Nguyen %d La %d	\n", number, tong);
return 0;
}
