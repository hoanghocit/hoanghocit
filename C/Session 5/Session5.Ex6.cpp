#include <stdio.h>
int main() {
    int number_1, number_2, luachon;
    printf("Ban Hay Nhap So Thu 1: ");
    scanf("%d", &number_1);
    printf("Ban Hay Nhap So Thu 2: ");
    scanf("%d", &number_2);
    do {
    printf("\n1. Tong 2 So \n");
    printf("2. Hieu 2 So \n");
    printf("3. Tich 2 So \n");
    printf("4. Thuong 2 so \n");
    printf("5. Thoat \n");
    printf("Lua Chon Cua Ban: ");
    scanf("%d", &luachon);
    switch (luachon) {
    case 1: {
    int tong = number_1 + number_2;
    printf("%d + %d = %d \n", number_1, number_2, tong);
    break;
    }
    case 2: {
    int hieu = number_1 - number_2;
    printf("%d - %d = %d \n", number_1, number_2, hieu);
    break;
    }
    case 3: {
    int tich = number_1 * number_2;
    printf("%d * %d = %d \n", number_1, number_2, tich);
    break;
    }
    case 4: {
    float thuong = (float)number_1 / number_2;
    printf("%d / %d = %.2f \n", number_1, number_2, thuong);
    }
    case 5:
    printf("Ket Thuc Chuong Trinh.\n");
    break;
    default:
    printf("Lua Chon Cua Ban Khong Ton Tai.\n");
    }
    }while(luachon != 5);
return 0;
}
