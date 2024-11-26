#include<stdio.h>
int main(){
	int number_1, number_2, number_3, number_4, number_5;
	int sochan = 0, sole = 0;
	printf("Ban Hay Nhap So Thu 1: ");
	scanf("%d", &number_1);
	printf("Ban Hay Nhap So Thu 2: ");
	scanf("%d", &number_2);
	printf("Ban Hay Nhap So Thu 3: ");
	scanf("%d", &number_3);
	printf("Ban Hay Nhap So Thu 4: ");
	scanf("%d", &number_4);
	printf("Ban Hay Nhap So Thu 5: ");
	scanf("%d", &number_5);
	if(number_1 % 2 == 0){
	sochan++;
	}else{
	sole++;
    }
	if(number_2 % 2 == 0){
	sochan++;
	}else{
	sole++;
    }
	if(number_3 % 2 == 0){
	sochan++;
	}else{
	sole++;
    }
	if(number_4 % 2 == 0){
	sochan++;
	}else{
	sole++;
    }
	if(number_5 % 2 == 0){
	sochan++;
	}else{
	sole++;
    }
    printf("Day So Co %d So Chan Va %d So Le \n", sochan, sole);
return 0;
}
