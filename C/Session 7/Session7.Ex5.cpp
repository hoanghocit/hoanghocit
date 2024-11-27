#include<stdio.h>
int main() {
	int mang[5] = {1,2,3,4,5};
	int soNhoNhat, soLonNhat;
	for(int i = 0; i < 5; i++){
	if(mang[i] > mang[0]){
	soLonNhat = mang[i];
	}else{
	soNhoNhat = mang[i];
	}
	}
	printf("Trong Mang Gia Tri Nho Nhat La: %d, Gia Tri Lon Nhat La: %d \n", soNhoNhat, soLonNhat);
return 0;
}

