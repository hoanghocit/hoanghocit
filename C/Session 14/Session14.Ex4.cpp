#include<stdio.h>
#include<string.h>
int demKyTu(char chuoi[], char kyTu){
    int dem = 0, size = strlen(chuoi);
    for(int i = 0; i < size; i++){
    if(chuoi[i] == kyTu){
        dem++;
    }
    }
return dem;
}

int main(){
    char kyTu;
    char chuoi[] = "Vu Duc Hoang";
    printf("Nhap Vao 1 Ky Tu Trong (Vu Duc Hoang): ");
    scanf("%c", &kyTu);
    int soLanXuatHien = demKyTu(chuoi, kyTu);
    printf("Ky Tu %c Xuat Hien %d Lan Trong Chuoi.\n", kyTu, soLanXuatHien);
return 0;
}
