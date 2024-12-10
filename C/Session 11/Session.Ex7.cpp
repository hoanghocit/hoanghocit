#include <stdio.h>
void taoMaTran(int matran[][100], int hang, int cot) {
    for (int i = 0; i < hang; i++) {
        printf("Nhap Cac Gia Tri Cua Hang %d:\n", i + 1);
        for (int j = 0; j < cot; j++) {
            printf("Nap Gia Tri Cua Cot %d: ", j + 1);
            scanf("%d", &matran[i][j]);
        }
    }
}
void inMaTran(int matran[][100], int hang, int cot) {
    printf("\nMa Tran Cua Ban La:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d ", matran[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int hang, cot;
    int maTran[100][100];

    printf("Nhap So Hang Ma Tran: ");
    scanf("%d", &hang);

    printf("Nhap So Cot Ma Tran: ");
    scanf("%d", &cot);

    taoMaTran(maTran, hang, cot);
    inMaTran(maTran, hang, cot);

    return 0;
}
