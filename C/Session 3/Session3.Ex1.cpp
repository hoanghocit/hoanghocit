#include<stdio.h>
int main(){
fflush(stdin);
char fullName[50];
printf("Ban Hay Nhap Ten Cua Ban: ", fullName);
fgets(fullName, sizeof(fullName), stdin);
printf("Xin Ch�o %s \n", fullName);
return 0;
}
