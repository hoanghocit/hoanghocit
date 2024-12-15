#include<stdio.h>
int main(){
	int number = 5;
	printf("Dia Chi number %d\n", &number);
	printf("Gia Tri number %d\n", number);
	
	int *numberptr = &number;
	printf("Dia Chi number %d\n", numberptr);
	printf("Gia Tri number %d\n", *numberptr);
return 0;
}
