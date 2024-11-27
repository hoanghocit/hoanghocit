#include<stdio.h>
int main() {
    int so_hang, so_cot;
    printf("Ban Hay Nhap So Hang: ");
    scanf("%d", &so_hang);
    printf("Ban Hay Nhap So Cot: ");
    scanf("%d", &so_cot);
    int tich = so_hang * so_cot;
    int mang[tich];
    for(int i = 0; i < tich; i++) {
    printf("Nhap Phan Tu [%d][%d]: ", i / so_cot, i % so_cot);
    scanf("%d", &mang[i]);
    }
    printf("\nMang Cua Ban:\n");
    for(int i = 0; i < so_hang * so_cot; i++) {
    printf("%d\t", mang[i]);
    if ((i + 1) % so_cot == 0){
    printf("\n");
    }
    }
return 0;
}
