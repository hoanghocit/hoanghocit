#include<stdio.h>
int main() {
    int mang[100], sophantu = 0, tongSoChan = 0, tongSo = 0, demGiaTri = 0;
    int luachon, vitri, giatri, max, min;
    do {
        printf("\nMENU\n");
        printf("1. Nhap So Phan Tu Can Nhap Va Gia Tri Cac Phan Tu \n");
        printf("2. In Ra Gia Tri Cac Phan Tu Dang Quan Ly \n");
        printf("3. In Ra Gia Tri Cac Phan Tu Chan Va Tinh Tong \n");
        printf("4. In Ra Gia Tri Lon Nhat Va Nho Nhat Trong Mang \n");
        printf("5. In Ra Cac Phan Tu La So Nguyen To Trong Mang Va Tinh Tong \n");
        printf("6. Nhap Vao Mot So Va Thong Ke Trong Mang Co Bao Nhieu Phan Tu Do \n");
        printf("7. Them Mot Phan Tu Vao Vi Tri Chi Dinh \n");
        printf("8. Thoat Chuong Trinh \n");
        printf("Lua Chon Cua Ban: ");
        scanf("%d", &luachon);
        switch (luachon) {
        case 1:
        printf("Nhap So Phan Tu: ");
        scanf("%d", &sophantu);
        for (int i = 0; i < sophantu; i++) {
        printf("Nhap Phan Tu %d: ", i);
        scanf("%d", &mang[i]);
        }
        printf("\n");
        break;
        case 2:
        printf("So Gia Tri Cua Mang La: ");
        for (int i = 0; i < sophantu; i++) {
        printf("%d ", mang[i]);
        }
        printf("\n");
        break;
        case 3:
        printf("So Gia Tri Cua Mang La: ");
        for (int i = 0; i < sophantu; i++) {
        if (mang[i] %2 == 0) {
        printf("%d ", mang[i]);
        tongSoChan += mang[i];
        }
        }
        printf("\n");
        printf("Tong Gia Tri Phan Tu Chan La: %d \n", tongSoChan);
        break;
        case 4:
        for(int i =0; i < sophantu; i++){
        if(mang[i] > mang[0]){
        max = mang[i];
        }else{
        min = mang[i];
        }
        }
        printf("Gia Tri Nho Nhat Trong Mang: %d\n", min);
        printf("Gia Tri Lon Nhat Trong Mang: %d\n", max);
        break;
        case 5:
        printf("So Gia Tri Nguyen To Cua Mang La: ");
        for (int i = 0; i < sophantu; i++) {
        printf("%d ", mang[i]);
        tongSo += mang[i];
        }
        printf("\n");
        printf("Tong Gia Tri Phan Tu Nguyen To La: %d \n", tongSo);
        break;
        case 6:
        printf("Nhap So Can Thong Ke: ");
        scanf("%d", &giatri);
        for(int i = 0; i < sophantu; i++){
        if(mang[i] == giatri){
        demGiaTri++;
        }
        }
        printf("So Phan Tu %d Xuat Hien %d Lan \n", giatri, demGiaTri);
        break;
        case 7:
        printf("Nhap Vi Tri Can Them (1-%d): ", sophantu);
        scanf("%d", &vitri);
        printf("Nhap Gia Tri: ");
        scanf("%d", &giatri);
        for (int i = sophantu; i >= vitri; i--) {
        mang[i] = mang[i - 1];
        }
        mang[vitri - 1] = giatri;
        sophantu++;
        break;
        case 8:
        printf("Thoat Chuong Trinh. \n");
        break;
        default:
        printf("Lua Chon Khong Ton Tai. \n");
        break;
        }
    }while (luachon != 8);
return 0;
}
