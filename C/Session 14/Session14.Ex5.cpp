#include<stdio.h>
#include<string.h>
int demSoTu(char chuoi[]){
    int dem = 0, soTu = 0, size = strlen(chuoi);
    for(int i = 0; i < size; i++){
    if (chuoi[i] == ' '){
    soTu = 0;
    }else if (soTu == 0){
    soTu = 1;
    dem++;
    }
    }
return dem;
}

int main() {
    char chuoi[100];
    printf("Nhap Vao 1 Chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    chuoi[strcspn(chuoi, "\n")] = '\0';
    int soTu = demSoTu(chuoi);
    printf("So Tu Trong Chuoi La: %d\n", soTu);
return 0;
}
