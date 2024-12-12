#include<stdio.h>
#include<string.h>
int nhapvainchuoi(char chuoi[]){
    printf("Nhap Chuoi: ");
    fgets(chuoi, 100, stdin);
    chuoi[strcspn(chuoi, "\n")] = '\0';
    return strlen(chuoi);
}

int main(){
    char chuoi[100];
    int size = nhapvainchuoi(chuoi);
    printf("Chuoi Vua Nhap La: %s\n", chuoi);
    printf("So Luong Ky Tu La: %d\n", size);
return 0;
}
