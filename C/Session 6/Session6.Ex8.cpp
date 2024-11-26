#include<stdio.h>
int main() {
    int soTien, SoThang, soLai;
    float soTienNhan, soTienLai;
    printf("Nhap So Tien Gui Ban Dau: ");
    scanf("%d", &soTien);
    printf("Nhap Lai Suat Hang Thang: ");
    scanf("%d", &soLai);
    printf("Nhap So Thang Gui: ");
    scanf("%d", &SoThang);
    
    soTienNhan = soTien;
    for (int i = 0; i < SoThang; i++) {
    soTienLai = soTienNhan * soLai / 100;
    soTienNhan += soTienLai;
    }
    soTienLai = soTienNhan - soTien;
    
    printf("Lai: %.f VND \n", soTienLai);
    printf("Thuc Nhan: %.f VND \n", soTienNhan);
return 0;
}
