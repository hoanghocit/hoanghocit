#include<stdio.h>
int main(){
	int number, reverse;
	printf("Moi Ban Nhap Vao 1 So Co 4 Chu So: ", number);
	scanf("%d", &number);
	int nghin = number / 1000;
	int tram = number % 1000 / 100;
	int chuc = number % 100 / 10;
	int donvi = number % 10;
	printf("So Dao Nguoc Cua %d La %d%d%d%d \n", number, donvi, chuc, tram, nghin);
return 0;
}
