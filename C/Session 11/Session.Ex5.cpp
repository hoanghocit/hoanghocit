#include<stdio.h>
int soNguyenTo(int n){
if(n <= 1){
return 0;
}
for(int i = 2; i < n; i++){
if(n % i == 0){
return 0;
}
}
return 1;
}
int main() {
    int number_1, number_2;
    printf("Ban Hay Nhap So Thu Nhat: ");
    scanf("%d", &number_1);
    printf("Ban Hay Nhap So Thu Hai: ");
    scanf("%d", &number_2);
    if(soNguyenTo(number_1)){
    printf("%d La So Nguyen To\n", number_1);
    }else{
    printf("%d Khong Phai La So Nguyen To\n", number_1);    
    }
    if(soNguyenTo(number_2)){
    printf("%d La So Nguyen To\n", number_2);
    }else{
    printf("%d Khong Phai La So Nguyen To\n", number_2);    
    }
return 0;
}
