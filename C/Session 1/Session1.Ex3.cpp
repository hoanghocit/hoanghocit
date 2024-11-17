#include<stdio.h>
int main(){
//Khai Bao Bien
int number_1, number_2, total;
//Nhap Gia Tri Cho Bien Number 1 Tu Phim Bam
printf("Moi Ban Nhap So Thu Nhat: ");
scanf("%d", &number_1);
//Nhap Gia Tri Cho Bien Number 2 Tu Phim Bam
printf("Moi Ban Nhap So Thu Hai: ");
scanf("%d", &number_2);
total = number_1 + number_2;
printf("%d + %d = %d", number_1, number_2, total);
return 0;
}
