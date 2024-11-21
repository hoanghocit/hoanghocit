#include<stdio.h>
int main(){
	float chieucao, canhday;
	printf("Ban Hay Nhap Chieu Cao Hinh Tam Giac: ", chieucao);
	scanf("%f", &chieucao);
	printf("Ban Hay Nhap Canh Day Hinh Tam Giac: ", canhday);
	scanf("%f", &canhday);
	float dientich;
	dientich = 0.5 * chieucao * canhday;
	printf("Dien Tich Hinh Tam Giac Bang %.2f \n", dientich);
return 0;
}
