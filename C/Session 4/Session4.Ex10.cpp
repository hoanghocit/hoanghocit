#include<stdio.h>
int main(){
	int number_1, number_2, number_3;
	printf("Ban Hay Nhap So Thu 1: ", number_1);
	scanf("%d", &number_1);
	printf("Ban Hay Nhap So Thu 2: ", number_2);
	scanf("%d", &number_2);
	printf("Ban Hay Nhap So Thu 3: ", number_3);
	scanf("%d", &number_3);
	if(number_1 < number_2 && number_2 < number_3){
	printf("So Xep Theo Thu Tu Tang Dan: %d, %d, %d", number_1, number_2, number_3);
	}else if(number_1 > number_2 && number_2 > number_3){
	printf("So Xep Theo Thu Tu Tang Dan: %d, %d, %d", number_3, number_2, number_1);
	}else if(number_2 > number_3 && number_3 > number_1){
	printf("So Xep Theo Thu Tu Tang Dan: %d, %d, %d", number_1, number_3, number_2);
	}else if(number_2 < number_3 && number_3 < number_1){
	printf("So Xep Theo Thu Tu Tang Dan: %d, %d, %d", number_2, number_3, number_1);
	}
return 0;
}
