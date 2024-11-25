#include<stdio.h>
int main(){
	int number, tich;
	printf("Ban Hay Nhap So Nguyen Bat Ky: ", number);
	scanf("%d" ,&number);
	if (number > 0 && number <= 10) {
	for (int i = 1; i <=10; i++){
	tich = number * i;
	printf("%d x %d = %d \n", number, i, tich);
	}
	}else{
	printf("%d Khong Hop Le", number);
	}
return 0;
}
