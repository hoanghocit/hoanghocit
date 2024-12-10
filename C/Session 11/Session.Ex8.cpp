#include <stdio.h>
int UCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int number_1, number_2;

    printf("Nhap So Thu Nhat: ");
    scanf("%d", &number_1);
    printf("Nhap So Thu Hai: ");
    scanf("%d", &number_2);

    int ucln = UCLN(number_1, number_2);

    printf("Uoc Chung Lon Nhat Cua %d Va %d La: %d\n", number_1, number_2, ucln);

return 0;
}
