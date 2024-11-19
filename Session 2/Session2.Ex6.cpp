#include<stdio.h>
int main(){
float pi = 3.14;
int bankinh = 5;
printf("Ban Kinh Hinh Tron: %d \n", bankinh);
int chuvi = 2 * pi * bankinh;
printf("Chu Vi Hinh Tron: 2 x %f x %d = %d \n", pi, bankinh, chuvi);
int dientich = pi * bankinh * bankinh;
printf("Dien Tich Hinh Tron: %f x %d^2 = %d \n", pi, bankinh, dientich);
return 0;
}
