#include<stdio.h>
void arr(int *mang, int size){
    printf("Phan Tu Trong Mang: ");
    for(int i = 0; i < size; i++){
    printf("%d ", mang[i]);
    }
    printf("\n");
}
int main(){
    int mang[100];
    int size;
    printf("Ban Hay Nhap Do Dai Mang: ");
    scanf("%d", &size);
    for(int i = 0; i < size; i++){
    printf("Ban Hay Nhap Phan Tu %d: ", i);
    scanf("%d", &mang[i]);
    }
    arr(mang, size);
return 0;
}
