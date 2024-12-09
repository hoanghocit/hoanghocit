#include<stdio.h>
int sum(int a, int b){
	return a +b;
}
int main() {
int x, y;
printf("Ban Hay Nhap Gia Tri x: ");
scanf("%d", &x);
printf("Ban Hay Nhap Gia Tri y: ");
scanf("%d", &y);
int tong = sum(x , y);
printf("%d + %d = %d", x , y, tong);
return 0;
}
