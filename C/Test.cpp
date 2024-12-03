#include<stdio.h>
int main() {
    int mang[100][100], n, luachon, tich = 1, giatri;
    int trangthai = 1;
    while(trangthai) {
        printf("\nMENU\n");
        printf("1. Nhap Kich Co Va Gia Tri Cac Phan Tu Cua Mang\n");
        printf("2. In Gia Tri Cac Phan Tu Cua Mang Theo Ma Tran\n");
        printf("3. In Ra Cac Phan Tu Duong Bien Va Tinh Tich\n");
        printf("4. In Ra Cac Phan Tu Duong Cheo Chinh\n");
        printf("5. In Ra Cac Phan Tu Duong Cheo Phu\n");
        printf("6. Sap Xep Duong Cheo Chinh Theo Thu Tu Tang Dan\n");
        printf("7. Tim Kiem Mot Phan Tu\n");
        printf("8. Thoat\n");
        printf("Ban Hay Nhap Lua Chon: ");
        scanf("%d", &luachon);
    //Kich Thuoc Mang Va Cac Gia Tri Cua Phan Tu
    if (luachon == 1) {
    printf("Ban Hay Nhap Kich Thuoc Mang: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
    printf("mang[%d][%d] = ", i, j);
    scanf("%d", &mang[i][j]);
  }
    }
    //In Gia Tri Cac Phan Tu Cua Mang Theo Ma Tran
    }else if (luachon == 2) {
    printf("Gia Tri Phan Tu Cua Mang La: \n");
    for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
    printf("%d ", mang[i][j]);
    }
    printf("\n");
    }
    //Phan Tu Duong Bien Va Tinh Tich
    }else if (luachon == 3) {
    printf("Cac Phan Tu Duong Bien: \n");
    for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
    if (i == 0 || j == 0 || i == n-1 || j == n-1) {
    printf("%d ", mang[i][j]);
    tich *= mang[i][j];
    }
    }
    printf("Tich Cua Duong Bien La: %d\n", tich);
    }
    //Cac Duong Cheo Chinh
    }else if (luachon == 4) {
    printf("Duong Cheo Chinh La: ");
    for(int i = 0; i < n; i++) {
    printf("%d ", mang[i][i]);
    }
    //Cac Duong Cheo Phu
    }else if (luachon == 5) {
    printf("Duong Cheo Phu La: ");
    for(int i = 0; i < n; i++) {
    printf("%d ", mang[i][n-1-i]);
    }
    //Tim Kiem Mot Phan Tu
    }else if (luachon == 7) {
    printf("Nhap Gia Tri Can Tim: \n");
    scanf("%d", giatri);
    for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
    if(mang[i][j] == giatri){
    printf("Phan Tu %d Tai Vi Tri [%d][%d]\n", giatri, i, j);
    }else{
    printf("Khong Tim Thay Phan Tu %d\n", giatri);
    }
    }
    }
    }else if (luachon == 8) {
    printf("Thoat Chuong Trinh\n");
    trangthai = 0;
    }else{
    printf("Lua Chon Khong Hop Le! Vui Long Chon Lai.\n");
    }
}
return 0;
}
