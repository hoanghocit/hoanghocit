#include<stdio.h>
int main(){
//Khai Bao Bien
int number;
//Nhap Gia Tri Cua Bien Number Tu Ban Phim
printf("Moi Ban Nhap So Diem Cua Ban: ");
scanf("%d", &number);
if (number > 5) {
printf("Diem %d Thuoc Loai Dat", number);
}else if (number < 5) {
printf("Diem %d Thuoc Loai Khong Dat", number);
}else{
printf("Diem %d Khong Hop Le", number);
}
return 0;
}
