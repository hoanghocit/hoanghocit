#include<stdio.h>
int main() {
	int mang[5] = {1,2,3,4,5};
	printf("Cac Phan Tu Chan Trong Mang La: \n");
	for(int i = 0; i < 5; i++){
	if(mang[i] %2 == 0){
	printf("mang[%d] %d x 3 = %d \n",i, mang[i], mang[i]*3);
	}
	if(mang[i] %2 != 0){
	printf("mang[%d] %d x 2 = %d \n",i, mang[i], mang[i]*2);
	}
	}
return 0;
}

