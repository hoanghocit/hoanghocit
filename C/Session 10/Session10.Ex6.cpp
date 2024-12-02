#include<stdio.h>
int main() {
    int n, giatri, demSo = 0;
    printf("Nhap So Phan Tu Trong Mang: ");
    scanf("%d", &n);
    int mang[n];
    printf("Nhap Cac Phan Tu Trong Mang: \n");
    for(int i = 0; i < n; i++){
    printf("mang[%d] = ", i);
    scanf("%d", &mang[i]);
    }
    printf("Ban Hay Nhap Gia Tri Can Tim: ");
    scanf("%d", &giatri);
    int vitri[100];
    for(int i = 0; i < n; i++){
    if(mang[i] == giatri){
    vitri[demSo] = i;
    demSo++;
    }
    }
    if (demSo > 0) {
    printf("Phan Tu %d Nam O Vi Tri: ", giatri);
    for(int i = 0; i < demSo; i++) {
    printf("mang[%d] ", vitri[i]);
    }
    printf("\n");
	}
return 0;
}
