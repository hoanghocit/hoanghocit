#include <stdio.h>
int main() {
    int ngay, thang, nam, songay;
    printf("Ban Hay Nhap Ngay: ", ngay);
    scanf("%d", &ngay);
    printf("Ban Hay Nhap Thang: ", thang);
    scanf("%d", &thang);
    printf("Ban Hay Nhap Nam: ", nam);
    scanf("%d", &nam);

    if (thang >= 1 && thang <= 12 && nam > 0) {
    if (thang == 2) {
    if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)) {
    songay = 29;
    }else{
    songay = 28;
    }
    }else if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12){
    songay = 31;
    }else{
    songay = 30;
    }
    if (ngay >= 1 && ngay <= songay) {
    printf("Ngay %d Thang %d Nam %d Chinh Xac", ngay, thang, nam);
    }else{
    printf("Ngay %d Thang %d Nam %d Khong Chinh Xac", ngay, thang, nam);
    }
    }else{
    printf("Thang %d Hoac Nam %d Khong Ton Tai.\n", thang, nam);
    }
return 0;
}
