#include<stdio.h>
int main(){
	int nam;
	printf("Ban Hay Nhap Nam: ", nam);
	scanf("%d", &nam);
	if((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)){
	printf("Nam %d La Nam Nhuan", nam);
	}else{
	printf("Nam %d Khong Phai La Nam Nhuan ", nam);
	}
return 0;
}
