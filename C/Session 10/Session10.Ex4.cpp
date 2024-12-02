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
    for(int i = 0; i < n - 1; i++) {
        int index = i;
    for(int j = i + 1; j < n; j++) {
    if(mang[j] < mang[index]) {
    index = j;
    }
    }
    if(index != i) {
    int temp = mang[i];
    mang[i] = mang[index];
    mang[index] = temp;
    }
    }
	printf("Mang Xep Xep Theo Thu Tu Tang Dan: \n");
	for(int i = 0; i < n; i++){
	printf("mang[%d] = %d \n", i, mang[i]);
	}
return 0;
}

