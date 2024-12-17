#include <stdio.h>
#include <ctype.h>  
void nhapChuoi(char *str) {
    printf("Nhap chuoi: ");
    fgets(str, 100, stdin);  
}
void inChuoi(char *str) {
    printf("Chuoi ban nhap: %s", str);
}
int demChuCai(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (isalpha(*str)) {
            count++;
        }
        str++;
    }
    return count;
}
int demChuSo(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (isdigit(*str)) {
            count++;
        }
        str++;
    }
    return count;
}
int demKyTuDacBiet(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (!isalpha(*str) && !isdigit(*str) && *str != ' ' && *str != '\n' && *str != '\t') {
            count++;
        }
        str++;
    }
    return count;
}
int main() {
    char chuoi[100];
    int luaChon;
    do {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi\n");
        printf("4. Dem so luong chu so trong chuoi\n");
        printf("5. Dem so luong ky tu dac biet trong chuoi\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        getchar();  
        switch (luaChon) {
            case 1:
                nhapChuoi(chuoi);
                break;
            case 2:
                inChuoi(chuoi);
                break;
            case 3:
                printf("So luong chu cai trong chuoi: %d\n", demChuCai(chuoi));
                break;
            case 4:
                printf("So luong chu so trong chuoi: %d\n", demChuSo(chuoi));
                break;
            case 5:
                printf("So luong ky tu dac biet trong chuoi: %d\n", demKyTuDacBiet(chuoi));
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long nhap lai.\n");
        }
    } while (luaChon != 6);
	return 0;
}
