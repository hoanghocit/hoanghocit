#include<stdio.h>
int main(){
	for(int i =1; i <= 10; i++){
	printf("Bang Cuu Chuong %d: \n", i);
	for(int ii = 1; ii <=10; ii++){
	int tich = i * ii;
	printf("%d x %d = %d \n", i, ii, tich);
	}
	}
return 0;
}
