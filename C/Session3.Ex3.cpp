#include<stdio.h>
int main(){
float pi = 3.14;
float bankinh;
printf("Ban Hay Nhap Ban Kinh Hinh Tron: ", bankinh);
scanf("%f", &bankinh);
float chuvi, dientich;
chuvi = 2 * pi * bankinh;
dientich = pi * bankinh * bankinh;
printf("Chu Vi Hinh Tron Co Ban Kinh %.2f Là %.2f \n", bankinh, chuvi);
printf("Dien Tich Hinh Tron Co Ban Kinh %.2f Là %.2f \n", bankinh, dientich);
return 0;
}
