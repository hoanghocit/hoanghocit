#include<stdio.h>
int main() {
	int n, giatri;
	printf("Nhap So Phan Tu Trong Mang: ");
	scanf("%d", &n);
	int mang[n];
	printf("Nhap Cac Phan Tu Trong Mang: \n");
	for(int i = 0; i < n; i++){
	printf("mang[%d] = ", i);
	scanf("%d", &mang[i]);
	}
	for(int i = 0; i < n; i++){
	for(int j = 0; j < n - i -1; j++){
	if(mang[j] > mang[j + 1]) {
    giatri = mang[j];
    mang[j] = mang[j + 1];
    mang[j + 1] = giatri;
    }
	}
	}
	printf("Mang Xep Xep Theo Thu Tu Tang Dan: \n");
	for(int i = 0; i < n; i++){
	printf("mang[%d] = %d \n", i, mang[i]);
	}
	printf("Ban Hay Nhap Gia Tri Can Tim: ");
	scanf("%d", &giatri);
	for(int i = 0; i < n; i++){
	if(mang[i] == giatri){
	printf("Phan Tu %d Nam Tai Vi Tri mang[%d]", giatri, i);
	break;
	}
	}
return 0;
}

