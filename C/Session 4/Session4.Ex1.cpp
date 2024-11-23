#include<stdio.h>
int main() {
	int number;
	printf("Ban Hay Nhap Gia Tri Bat Ky: ", number);
	scanf("%d", &number);
	if(number>0){
	printf("%d La So Duong", number);
	}else{
	printf("%d La So Am", number);
	}
return 0;
}
