#include <stdio.h>
int main() {
//Khai Bao Bien
int a, b, x;
//Nhap Gia Tri Cua a Tu Ban Phim
printf("Nhap He So a: ");
scanf("%d", &a);
//Nhap Gia Tri Cua b Tu Ban Phim
printf("Nhap He So b: ");
scanf("%d", &b);
if (a == 0) {
printf("Phuong Trinh Vo Nghiem", a);
}else if (b == 0) {
printf("Phuong Trinh Vo So Nghiem", b);
}else{
x = -b / a;
printf("Nghiem Cua Phuong Trinh La: %dx + %d = %d", a, b, x);
}
return 0;
}
