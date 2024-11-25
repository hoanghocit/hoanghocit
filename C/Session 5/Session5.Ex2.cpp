#include<stdio.h>
int main(){
    int number;
    int number_succes = 25;
    while(number != number_succes){
    printf("Ban Hay Nhap So Nguyen Bat Ky: ");
    scanf("%d", &number);
    if(number == number_succes){
    printf("So %d La So Chinh Xac!\n", number);
    break;
    }else{
    printf("So Ban Nhap Khong Chinh Xac!\n");
    } 
	}
return 0;
}
