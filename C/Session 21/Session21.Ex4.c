#include<stdio.h>
int main(){
	FILE *fptr;
	fptr=fopen("bt01.txt","r");
	char text[100];
	fgets(text,100,fptr);
	printf("Hang dau tien trong file la %s",text);
	fclose(fptr);
	return 0;
}
