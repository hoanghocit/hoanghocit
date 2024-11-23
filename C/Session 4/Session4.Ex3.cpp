#include<stdio.h>
int main() {
	int number;
	printf("Ban Hay Nhap Gia Tri Bat Ky: ", number);
	scanf("%d", &number);
	if(number%3==0 && number%5==0){
	printf("%d Chia Het Cho Ca 3 Va 5", number);
	}else if(number%3==0){
	printf("%d Chia Het Cho 3", number);
	}else if(number%5==0){
	printf("%d Chia Het Cho 5", number);
	}
return 0;
}
