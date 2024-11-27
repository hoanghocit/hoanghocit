#include<stdio.h>
int main() {
    int n, dem;
    int so = 2;
    printf("Ban Hay Nhap Tong So Nguyen n: ");
    scanf("%d", &n);
    if(n <= 0){
    printf("Ban Hay Nhap So Nguyen Duong.");
    }
    printf("Tong %d So Nguyen To: \n", n);
    while(dem < n) {
    int soNguyenTo = 1;
    for(int i = 2; i * i <= so; i++) {
    if(so % i == 0){
    soNguyenTo = 0;
    break;
    }
    }
    if(soNguyenTo){
    printf("%d \n", so);
    dem++;
    }
    so++;
    }
return 0;
}
