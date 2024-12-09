#include<stdio.h>
int soHoanHao(int n){
if(n <= 0){
return 0;
}
int sum = 0;
for(int i = 1; i < n; i++){
if(n & i == 0){
sum += i;
}
}
if(sum = n){
return 1;
}
return 0;
}
int main() {
    int number_1, number_2;
    printf("Ban Hay Nhap So Thu Nhat: ");
    scanf("%d", &number_1);
    printf("Ban Hay Nhap So Thu Hai: ");
    scanf("%d", &number_2);
    if (soHoanHao(number_1)) {
    printf("%d La So Hoan Hao\n", number_1);
    }else{
    printf("%d Khong Phai La So Hoan Hao\n", number_1);
    }
    if (soHoanHao(number_2)) {
    printf("%d La So Hoan Hao\n", number_2);
    } else {
    printf("%d Khong Phai La So Hoan Hao\n", number_2);
    }
return 0;
}
