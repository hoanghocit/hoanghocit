#include<stdio.h>
int main() {
	int number;
	printf("Ban Hay Nhap Gia Tri Bat Ky: ", number);
	scanf("%d", &number);
	if(number%2==0){
	printf("%d La So Chan", number);
	}else{
	printf("%d La So Le", number);
	}
return 0;
}
