#include<stdio.h>
int main(){
	FILE *fptr;
	char str[100];
	fptr=fopen("bt01.txt","a");
	printf("Nhap mot chuoi bat ki ");
	fgets(str,100,stdin);
	fputs(str,fptr);
	fclose(fptr);
	return 0;
}
