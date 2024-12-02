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

