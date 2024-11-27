#include<stdio.h>
int main() {
	int n;
	printf("Ban Hay Nhap So Luong Cua Mang: ");
	scanf("%d", &n);
	int mang[n];
	for(int i = 1; i < n + 1; i++){
	printf("Ban Hay Nhap Gia Tri Cua Mang %d: ", i);
	scanf("%d", &mang[i]);
	}
	printf("Cac Phan Tu Trong Mang La: \n");
	for(int i = 1; i < n + 1; i++){
	printf("mang[%d] = %d \n", i, mang[i]);
	}
return 0;
}
