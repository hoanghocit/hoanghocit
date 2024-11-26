#include<stdio.h>
int main(){
	int number_1, number_2, number_3, number_4, number_5;
	printf("Ban Hay Nhap So Thu 1: ");
	scanf("%d", &number_1);
	printf("Ban Hay Nhap So Thu 2: ");
	scanf("%d", &number_2);
	printf("Ban Hay Nhap So Thu 3: ");
	scanf("%d", &number_3);
	printf("Ban Hay Nhap So Thu 4: ");
	scanf("%d", &number_4);
	printf("Ban Hay Nhap So Thu 5: ");
	scanf("%d", &number_5);
	if(number_1 % 2 == 0 || number_2 % 2 == 0 || number_3 % 2 == 0 || number_4 % 2 == 0 || number_5 % 2 == 0){
	printf("Trong Day So Co So Chan. Vui Long Nhap Lai!");
	}else{
	int ketqua = number_1 + number_2 + number_3 + number_4 + number_5;
	printf("%d + %d + %d + %d + %d = %d", number_1, number_2, number_3, number_4, number_5, ketqua);
    }
return 0;
}
