#include<stdio.h>
int main(){
	int matrix[3][3]={
	{1,2,3},
	{4,5,6},
	{7,8,9}
	};
	int n;
	printf("Cac phan tu tren duong cheo phu: ");
	for(int i=0;i<3;i++){
		printf("%d ",matrix[i][2-i]);
		n+=matrix[i][2-i];
		
	}
	printf("\nTong cac phan tu duong cheo phu la :%d",n);
	return 0;
}
