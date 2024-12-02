#include<stdio.h>
int main() {
	int n;
	printf("Nhap So Phan Tu Trong Mang: ");
	scanf("%d", &n);
	int mang[n];
	printf("Nhap Cac Phan Tu Trong Mang: \n");
	for(int i = 0; i < n; i++){
	printf("mang[%d] = ", i);
	scanf("%d", &mang[i]);
	}
    for(int i = 1; i < n; i++) {
        int key = mang[i];
        int j = i - 1;
    while(j >= 0 && mang[j] > key) {
    mang[j + 1] = mang[j];
    j = j - 1;
    }
    mang[j + 1] = key;
    }
	printf("Mang Xep Xep Theo Thu Tu Tang Dan: \n");
	for(int i = 0; i < n; i++){
	printf("mang[%d] = %d \n", i, mang[i]);
	}
return 0;
}

