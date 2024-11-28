#include<stdio.h>
int main(){
	int arr[9]={1,2,1,3,4,3,2,1,1};
	int number,dem;
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			if(arr[i]==arr[j]){
				dem++;
			}
		}
		
	if(dem>0){
		number = arr[i];
	}
}
	printf("Phan tu co so lan xuat hien nhieu nhat trong mang:%d",number);
	return 0;
}
