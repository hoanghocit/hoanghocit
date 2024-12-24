#include<stdio.h>
int main(){
	FILE *fptr;
	char ch;
	fptr=fopen("bt01.txt","r");
	ch=fgetc(fptr);
	printf("Ky tu dau tie trong file la %c\n",ch);
	fclose(fptr);
	return 0;
}
