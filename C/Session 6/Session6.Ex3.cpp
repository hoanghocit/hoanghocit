#include<stdio.h>
int main(){
	int password;
	int password_success = 25122006;
	printf("Ban Hay Nhap Mat Khau: ");
	scanf("%d", &password);
	if(password == password_success){
	printf("Dang Nhap Thanh Cong!");
    }else{
    printf("Mat Khau Khong Chinh Xac!");
	}
return 0;
}
