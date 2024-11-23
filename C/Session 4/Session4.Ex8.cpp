#include<stdio.h>
int main(){
	int canha, canhb, canhc;
	printf("Ban Hay Nhap Canh a: ", canha);
	scanf("%d", &canha);
	printf("Ban Hay Nhap Canh b: ", canhb);
	scanf("%d", &canhb);
	printf("Ban Hay Nhap Canh c: ", canhc);
	scanf("%d", &canhc);
	if((canha + canhb > canhc) && (canhb + canhc > canha) && (canhc + canha > canhb)){
	printf("%d, %d, %d La Ba Canh Cua Tam Giac", canha, canhb, canhc);
    }else{
	printf("%d, %d, %d Khong Phai La Ba Canh Cua Tam Giac", canha, canhb, canhc);
	}
return 0;
}
