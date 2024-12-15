#include<stdio.h>
void tong(int *number1, int *number2, int *sum){
*sum = *number1 + *number2;
}
int main(){
    int number_1, number_2, sum;
    printf("Ban Hay Nhap Gia Tri 1: ");
    scanf("%d", &number_1);
    printf("Ban Hay Nhap Gia Tri 2: ");
    scanf("%d", &number_2);
    tong(&number_1, &number_2, &sum);
    printf("%d + %d = %d\n", number_1, number_2, sum);
return 0;
}
