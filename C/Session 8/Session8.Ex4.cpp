#include<stdio.h>
int main(){
	int arr[3][4]={{2,2,3,4},{5,6,7,8},{9,10,11,12}};
	int max = arr[0][0];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			if(arr[i][j] > max){
				max = arr[i][j];
			}
	    }
	}
	printf("gia tri lon nhat la: %d \n",max);
	return 0;
}
