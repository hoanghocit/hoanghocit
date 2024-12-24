#include<stdio.h>
int main(){
	FILE *fptr;
	fptr= fopen("bt01.txt","w");
	fprintf(fptr,"hello world!");
	fclose(fptr);
	return 0;
}
