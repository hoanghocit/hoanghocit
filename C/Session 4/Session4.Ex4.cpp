#include<stdio.h>
int main(){
	int thang;
	printf("Ban Hay Nhap Thang: ", thang);
	scanf("%d", &thang);
	switch (thang) {
		case 1:
		printf("Thang 1 Co 31 Ngay");
		break;
		case 2:
		printf("Thang 2 Co 28 Ngay (Neu La Nam Nhuan Se Co 29 Ngay)");
		break;
		case 3:
		printf("Thang 3 Co 31 Ngay");
		break;
		case 4:
		printf("Thang 4 Co 30 Ngay");
		break;
		case 5:
		printf("Thang 5 Co 31 Ngay");
		break;
		case 6:
		printf("Thang 6 Co 30 Ngay");
		break;
		case 7:
		printf("Thang 7 Co 31 Ngay");
		break;
		case 8:
		printf("Thang 8 Co 31 Ngay");
		break;
		case 9:
		printf("Thang 9 Co 30 Ngay");
		break;
		case 10:
		printf("Thang 10 Co 31 Ngay");
		break;
		case 11:
		printf("Thang 11 Co 30 Ngay");
		break;
		case 12:
		printf("Thang 12 Co 31 Ngay");
		break;
        default:
        printf("So Thang Khong Hop Le");
        break;
	}
return 0;
}
