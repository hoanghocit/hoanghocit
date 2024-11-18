#include <stdio.h>
int main() {
int a, b, ketqua;
char c;
//Nhap Gia Tri Cua Bien a Tu Ban Phim
printf("Nhap He So a: ");
scanf("%d", &a);
//Nhap Gia Tri Cua Bien b Tu Ban Phim
printf("Nhap He So b: ");
scanf("%d", &b);
//Nhap Gia Tri Phep Toan Tu Ban Phim
printf("Nhap Phep Toan (+, -, *, /): ");
scanf(" %c", &c);

if (c == '+') {
ketqua = a + b;
printf("Ket Qua: %d + %d = %d", a, b, ketqua);
}else if (c == '-') {
ketqua = a - b;
printf("Ket Qua: %d - %d = %d", a, b, ketqua);
}else if (c == '*') {
ketqua = a * b;
printf("Ket Qua: %d * %d = %d", a, b, ketqua);
}else if (c == '/') {
if (b != 0) {
ketqua = a / b;
printf("Ket Qua: %d / %d = %d", a, b, ketqua);
}else{
printf("Phep Tinh Khong The Chia Cho 0");
}
}else{
printf("Phep Toan Khong Hop Le");
}
return 0;
}
