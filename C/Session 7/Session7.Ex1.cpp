#include<stdio.h>
int main() {
	int mang[3] = {1,3,5};
	int kichthuoc = sizeof(mang) / sizeof(mang[3]);
	printf("Kich Thuoc Cua Mang La: %d \n", kichthuoc);
	printf("Cac Phan Tu Cua Mang La: \n");
	for(int i = 0; i < 5; i++){
	printf("mang[%d] = %d \n", i, mang[i]);
	}
return 0;
}

