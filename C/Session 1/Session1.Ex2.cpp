#include<stdio.h>
int main(){
//Khai Bao Bien
int number;
//Nhap Gia Tri Cua Bien Number Tu Ban Phim
printf("Moi Ban Nhap So Nguyen Bat Ky: ");
scanf("%d", &number);
if (number %2 == 0){
printf("%d La So Chan", number);	
}else{
printf("%d La So Le", number);
}
return 0;
}
