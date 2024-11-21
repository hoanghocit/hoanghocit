#include<stdio.h>
int main(){
	float diemToan, diemVan, diemTiengAnh;
	printf("Ban Hay Nhap Diem Toan: ", diemToan);
	scanf("%f", &diemToan);
	printf("Ban Hay Nhap Diem Van: ", diemVan);
	scanf("%f", &diemVan);
	printf("Ban Hay Nhap Diem Tieng Anh: ", diemTiengAnh);
	scanf("%f", &diemTiengAnh);
	float tongDiem, trungbinhDiem;
	tongDiem = diemToan + diemVan + diemTiengAnh;
	trungbinhDiem = tongDiem / 3;
	printf("Tong Diem Ba Mon Cua Ban La %.2f \n", tongDiem);
	printf("Diem Trung Binh Ba Mon Cua Ban La %.2f \n", trungbinhDiem);
return 0;
}
