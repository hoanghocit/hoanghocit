#include<stdio.h>
int main(){
	int number_1 = 100;
	int number_2 = 500;
	int tong = number_1 + number_2;
	printf("Tong Cua 2 So La %d \n", tong);
	int hieu = number_2 - number_1;
	printf("Hieu Cua 2 So La %d \n", hieu);
	int tich = number_1 * number_2;
	printf("Tich Cua 2 So La %d \n", tich);
	float thuong = (float)number_1 / number_2;
	printf("Thuong Cua 2 So La %.2f \n", thuong);
return 0;
}
