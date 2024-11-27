#include<stdio.h>
int main() {
	int mang[5];
	for(int i = 1; i < 6; i++){
	printf("Ban Hay Nhap Phan Tu %d Cua Mang: ", i);
	scanf("%d", &mang[i]);
	}
	printf("\nCac Phan Tu Trong Mang La: \n");
	for(int i = 1; i < 6; i++){
	printf("mang[%d] = %d \n", i, mang[i]);
	}
return 0;
}
