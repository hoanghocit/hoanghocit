#include<stdio.h>
int main(){
	int arr[5]={1,6,3,4,5};
	int n,count=0;
	printf("Moi ban nhap phan tu: ");
	scanf("%d",&n);
	for(int i=0;i<=5;i++){
		if(n==arr[i]){
			count=1;
			printf("Vi tri phan tu trong mang la %d",i+1);
		}
	}

	if( count!=1 ){
		printf("Phan tu da nhap khong co trong mang");
	}
	return 0;
}
