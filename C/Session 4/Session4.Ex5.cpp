#include<stdio.h>
int main(){
	int number_1, number_2, number_3;
	printf("Ban Hay Nhap So Dau: ", number_1);
	scanf("%d", &number_1);
	printf("Ban Hay Nhap So Cuoi: ", number_3);
	scanf("%d", &number_3);
	printf("Ban Hay Nhap So Giua: ", number_2);
	scanf("%d", &number_2);
	if (number_1 < number_2 && number_2 < number_3) {
	printf ("%d Nam Giua %d Va %d", number_2, number_1, number_3); 
	}else{
	printf ("%d Khong Nam Giua", number_2); 
	}  
return 0;
}
