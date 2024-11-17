#include<stdio.h>
int main(){
//Khai Bao Bien
int number;
//Nhap Gia Tri Cua Bien Number Tu Ban Phim
printf("Moi Ban Nhap So Diem Cua Ban: ");
scanf("%d", &number);
if (number < 4) {
printf("Diem %d Xep Loai Khong Dat", number);
}else if (number >= 4 && number <= 6) {
printf("Diem %d Xep Loai Trung Binh", number);
}else if (number > 6 && number <= 8) {
printf("Diem %d Xep Loai Kha", number);
}else if (number > 8 && number <= 9) {
printf("Diem %d Xep Loai Gioi", number);
}else if (number > 9 && number <= 10) {
printf("Diem %d Xep Loai Xuat Xac", number);
}else{
printf("Diem %d Khong Hop Le", number);
}
return 0;
}
