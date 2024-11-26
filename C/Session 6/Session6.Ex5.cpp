#include<stdio.h>
int main(){
	int day,month,year;
	printf("Ban Hay Nhap So Nam: ");
	scanf("%d",&year);
	printf("Ban Hay Nhap So Thang: ");
	scanf("%d",&month);
	if(month < 1 || month > 12){
	printf("So Thang Khong Hop Le");
	}
	if(month==1||month==3||month==5||month==6||month==8||month==10||month==12){
	day=31;
	}
	if(month==4||month==7||month==9||month==11){
	day=30;
	}
	if(month==2){
	if(year%4==0&&year%100!=0||year%400==0){
	day=29;
	}else{
	day=28;
	}
	}
	printf("Thang %d Nam %d Co %d Ngay!",month,year,day);
return 0;
}
