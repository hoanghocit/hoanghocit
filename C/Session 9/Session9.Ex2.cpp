#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	int n,index;
	printf("Ban Hay Nhap Vi Tri Cua Phan Tu Muon Sua: ");
	scanf("%d",&index);
	printf("Moi Ban Nhap So Thay The: ");
	scanf("%d",&n);
	for(int i=0;i<5;i++){
		arr[index-1]=n;
	}
	for(int i=0;i<5;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
