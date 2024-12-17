#include <stdio.h>
#include <ctype.h>
#include <string.h>
void nhapChuoi(char *str) {
    printf("Nhap chuoi: ");
    fgets(str, 100, stdin);  
    str[strcspn(str, "\n")] = '\0';  
}
void inDaoChuoi(char *str) {
    int len = strlen(str);
    printf("Chuoi dao nguoc: ");
    for (int i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");
}
int demSoLuongTu(char *str) {
    int count = 0;
    char *word = strtok(str, " \t\n");
    while (word != NULL) {
        count++;
        word = strtok(NULL, " \t\n");
    }
    return count;
}
void soSanhDoDaiChuoi(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 < len2) {
        printf("Chuoi thu nhat ngan hon chuoi thu hai.\n");
    } else if (len1 > len2) {
        printf("Chuoi thu nhat dai hon chuoi thu hai.\n");
    } else {
        printf("Hai chuoi co do dai bang nhau.\n");
    }
}
void chuyenHoa(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
    printf("Chuoi sau khi chuyen sang hoa: %s\n", str);
}
void themChuoi(char *str1, char *str2) {
    strcat(str1, str2);
    printf("Chuoi sau khi them: %s\n", str1);
}
int main() {
    char chuoi1[100], chuoi2[100];
    int luaChon;
    do {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi dao nguoc\n");
        printf("3. Dem so luong tu trong chuoi\n");
        printf("4. So sanh do dai chuoi\n");
        printf("5. In hoa tat ca chu cai trong chuoi\n");
        printf("6. Them chuoi khac vao chuoi ban dau\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        getchar();  
        switch (luaChon) {
            case 1:
                nhapChuoi(chuoi1);
                break;
            case 2:
                inDaoChuoi(chuoi1);
                break;
            case 3:
                printf("So luong tu trong chuoi: %d\n", demSoLuongTu(chuoi1));
                break;
            case 4:
                printf("Nhap chuoi so sanh: ");
                nhapChuoi(chuoi2);
                soSanhDoDaiChuoi(chuoi1, chuoi2);
                break;
            case 5:
                chuyenHoa(chuoi1);
                break;
            case 6:
                printf("Nhap chuoi them vao: ");
                nhapChuoi(chuoi2);
                themChuoi(chuoi1, chuoi2);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long nhap lai.\n");
        }
    } while (luaChon != 7);
    return 0;
}
