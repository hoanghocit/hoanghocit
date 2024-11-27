#include<stdio.h>
int main() {
	int mang[5] = {1,2,3,4,5};
	printf("Cac Phan Tu Chan Trong Mang La: \n");
	for(int i = 0; i < 5; i++){
	if(mang[i] %2 == 0){
	printf("mang[%d] = %d \n",i, mang[i]);
	}
	}
return 0;
}

