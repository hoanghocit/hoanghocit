#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x = 15;
    int y = 25;
    printf("Ban Dau: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("Sau: x = %d, y = %d\n", x, y);
return 0;
}
