#include <stdio.h>
#include <string.h>
int demChuCai(char chuoi[]){
    int dem = 0, size = strlen(chuoi);
    for(int i = 0; i < size; i++){
    if ((chuoi[i] >= 'A' && chuoi[i] <= 'Z') || (chuoi[i] >= 'a' && chuoi[i] <= 'z')) {
    dem++;
    }
    }
return dem;
}

int main() {
    char chuoi[] = "Vu Duc Hoang 25";
    int soChuCai = demChuCai(chuoi);
    printf("So Ky Tu La Chu Cai Trong Chuoi La: %d\n", soChuCai);
return 0;
}
