#include<stdio.h>
int main(){
//Khai Bao Bien
int number_1, number_2;
//Nhap Gia Tri Cua Bien Number 1 Tu Ban Phim
printf("Moi Ban Nhap So Thu Nhat: ");
scanf("%d", &number_1);
//Nhap Gia Tri Cua Bien Number 2 Tu Ban Phim
printf("Moi Ban Nhap So Thu Hai: ");
scanf("%d", &number_2);
if (number_1 < number_2) {
printf("So Nho Hon La: %d", number_1);
}else if (number_1 > number_2) {
printf("So Nho Hon La: %d", number_2);
}else{
printf("Hai So Bang Nhau");
}
return 0;
}
