#include<stdio.h>
int main(){
	int n;
	printf("Moi nhap so luong phan tu trong mang: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Moi nhap gia tri cua so thu %d la: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Mang gia tri duoc sap xep tu cuoi len tren: ");
	for(int i=n-1;i<=n&&i>=0;i--){
		printf("%d ",arr[i]);
	}

	return 0;
}
