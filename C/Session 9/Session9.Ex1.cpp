#include<stdio.h>
int main(){
	int currentLength=100,index,value;
	int arr[100];
if (currentLength <= 100) {
   printf("Ban Hay Nhap Vi Tri Them: ");
   scanf("%d", &index);
   if (index >= 0 && index <= currentLength) {
        printf("Ban Hay Nhap Gia Tri Can Them: ");
		scanf("%d", &value);
        for (int i = currentLength; i > index; i--) {
            arr[i] = arr[i - 1];
            }
        arr[index] = value;
        currentLength++;
        printf("Mang Sau Khi Nhap La: ");
        for (int i=0;i<=currentLength;i++){
            	printf("%d",arr[i]);
			}
     } else {
            printf("Vi Tri Khong Hop Le!\n");
         }
	}
	return 0;
}
