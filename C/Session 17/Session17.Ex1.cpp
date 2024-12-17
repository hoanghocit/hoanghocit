#include<stdio.h>
#include <stdlib.h>
void nhapMang(int **arr, int *n) {
    printf("Nhap so phan tu: ");
    scanf("%d", n);
    *arr = (int *)malloc(*n * sizeof(int));
    if (*arr == NULL) {
        printf("Khong du bo nho!\n");
        exit(1);
    }
    for (int i = 0; i < *n; i++) {
        printf("Nhap phan tu %d: ", i + 1);
        scanf("%d", &(*arr)[i]);
    }
}
void showarr(int *arr,int size){
	for(int i=0;i<size;i++){
		printf("arr[%d]=%d\n",i,*(arr+i));
	}
}
int sizearr(int size) {
    return size;
}
int tongarr(int *arr,int size){
	int sum=0;
	for(int i=0;i<size;i++){
		sum+=arr[i];
	}
	return sum;
}
int sapXep(int *arr,int size){
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1;j++){
			if(arr[j]<arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}	
}
int main(){
	int size=0;
	int choice;
	int *arr=NULL;
	do{
	printf("\nMenu\n");
	printf("1.Nhap vao so phan tu va tung phan tu \n");
	printf("2.Hien thi cac phan tu trong mang\n");
	printf("3.Tinh do dai mang\n");
	printf("4.Tinh tong cac phan tu trong mang\n");
	printf("5.Hien thi phan tu lon nhat\n");
	printf("6.Thoat\n");
    printf("Nhap lua chon: ");
    scanf("%d", &choice);
    switch(choice){
		case 1:
			nhapMang(&arr,&size);
		case 2:{
			if (size > 0) {
                    showarr(arr, size);
                } else {
                    printf("Mang chua duoc nhap!\n");
                }
			break;
		}
		case 3:{
			 printf("Do dai mang: %d\n", sizearr(size));
			break;
		}
		case 4:{
			 printf("Tong cac phan tu trong mang: %d\n", tongarr(arr, size));
			break;
		}
		case 5:{
		   printf("Phan tu lon nhat trong mang la %d",arr[size-1]);
			break;
		}
		case 6:{
			printf("Thoat chuong trinh.\n");
			break;
		}
		default:
			printf("Moi nhap lai ");
}
	}while(choice!=6);
	return 0;
}
