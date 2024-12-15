#include<stdio.h>
int timKiemPhanTu(int *mang, int size, int giatri) {
    for (int i = 0; i < size; i++) {
    if (mang[i] == giatri) {
    return i;
    }
    }
	return -25;
}

int main() {
    int mang[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(mang) / sizeof(mang[0]);
    int giatri;
    printf("Ban Hay Nhap Gia Tri Can Tim: ");
    scanf("%d", &giatri);
    int vitri = timKiemPhanTu(mang, size, giatri);
    if (vitri != -25) {
    printf("Gia Tri %d Tai Vi Tri: %d\n", giatri, vitri);
    }else{
    printf("Gia Tri %d Khong Ton Tai Trong Mang.\n", giatri);
    }
return 0;
}
