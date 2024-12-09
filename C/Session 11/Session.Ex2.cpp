#include<stdio.h>
void array(int arr[], int size){
    printf("Mang Co Cac Phan Tu La: ");
    for(int i = 0; i < size; i++){
    printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
int mang[5] = {1, 2, 3, 4, 5};
int kichthuoc = sizeof(mang) / sizeof(mang[0]);
array(mang, kichthuoc);
return 0;
}
