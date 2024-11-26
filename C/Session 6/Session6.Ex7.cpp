#include<stdio.h>
int main(){
	int number;
	printf("Ban Hay Nhap So Nguyen Bat Ky: ");
	scanf("%d", &number);
	if(number ==0){
    printf("So 0 Co Vo So Nghiem");
	}else{
    printf("Cac Uoc Cua So %d La: \n", number);
	for(int i = 1; i <= number; i++){
	if (number % i == 0) {
    printf("%d\n", i);
    }	
	}
	}
return 0;
}
