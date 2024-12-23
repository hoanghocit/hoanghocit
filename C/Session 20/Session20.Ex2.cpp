#include<stdio.h>
#include<string.h>

struct sanpham {
    char masanpham[20];
    char tensanpham[50];
    float gianhapsanpham;
    float giabansanpham;
    int soluongsanpham;
};

int main() {
    struct sanpham danhsach[100];
    int soluongsp = 0;
    float doanhThu = 0;
    int choice;

    do{
        printf("\n-- MENU --\n");
        printf("1. Hien Thi Danh Sach San Pham\n");
        printf("2. Them San Pham Moi\n");
        printf("3. Nhap San Pham (Tang So Luong)\n");
        printf("4. Ban San Pham\n");
        printf("5. Doanh Thu Hien Tai\n");
        printf("6. Thoat\n");
        printf("Lua Chon Cua Ban: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            if(soluongsp == 0){
                printf("Danh Sach Trong!\n");
            }else{
            for(int i = 0; i < soluongsp; i++){
                printf("%d\n", i + 1);
                printf("Ma So San Pham: %s\n", danhsach[i].masanpham);
                printf("Ten San Pham: %s", danhsach[i].tensanpham);
                printf("Gia Nhap San Pham: %.2f\n", danhsach[i].gianhapsanpham);
                printf("Gia Ban San Pham: %.2f, So Luong: %d\n", danhsach[i].giabansanpham);
                printf("So Luong San Pham: %d\n", danhsach[i].soluongsanpham);
            }
        }
        break;
        
        case 2:
        	printf("Nhap Ma San Pham: ");
            scanf("%s", danhsach[soluongsp].masanpham);
            printf("Nhap Ten San Pham: ");
            scanf(" %[^\n]", danhsach[soluongsp].tensanpham);
            printf("Nhap Gia Nhap San Pham: ");
            scanf("%f", &danhsach[soluongsp].gianhapsanpham);
            printf("Nhap Gia Ban San Pham: ");
            scanf("%f", &danhsach[soluongsp].giabansanpham);
            printf("Nhap So Luong San Pham: ");
            scanf("%d", &danhsach[soluongsp].soluongsanpham);

            doanhThu -= danhsach[soluongsp].soluongsanpham * danhsach[soluongsp].gianhapsanpham;
            soluongsp++;
            printf("Them San Pham Thanh Cong!\n");
        break;

        case 3:
        	if(soluongsp == 0){
            	printf("Danh Sach Trong!\n");
            }else{
                char search[20];
                printf("Nhap Ma San Pham Can Nhap: ");
                scanf("%s", search);
                
                int found = 0;
                for(int i = 0; i < soluongsp; i++){
                    if(strcmp(danhsach[i].masanpham, search) == 0){
                    int soluongNhap;
                        printf("Nhap So Luong Muon Them: ");
                        scanf("%d", &soluongNhap);
                        danhsach[i].soluongsanpham += soluongNhap;
                        doanhThu -= soluongNhap * danhsach[i].gianhapsanpham;
                        found = 1;
                        printf("Nhap Them Thanh Cong!\n");
                    break;
                    }
                }
                if(!found){
                    printf("San Pham Khong Ton Tai!\n");
                }
            }
        break;

        case 4:
        	if(soluongsp == 0){
                printf("Danh Sach Trong!\n");
            }else{
                char search[20];
                printf("Nhap Ma San Pham Can Ban: ");
                scanf("%s", search);

                int found = 0;
                for(int i = 0; i < soluongsp; i++){
                if(strcmp(danhsach[i].masanpham, search) == 0){
                int soluongBan;
                    printf("Nhap So Luong Muon Ban: ");
                    scanf("%d", &soluongBan);
                    if(soluongBan > danhsach[i].soluongsanpham){
                        printf("Khong Du So Luong De Ban!\n");
                    }else{
                        danhsach[i].soluongsanpham -= soluongBan;
                        doanhThu += soluongBan * danhsach[i].giabansanpham;
                        printf("Ban Thanh Cong!\n");
                    }
                    if(danhsach[i].soluongsanpham == 0){
                        printf("San Pham Da Het Hang!\n");
                    }
                    found = 1;
                    break;
                	}
            	}
                if(!found){
                    printf("San Pham Khong Ton Tai!\n");
                }
            }
        break;

        case 5:
            printf("Doanh Thu Hien Tai: %.2f\n", doanhThu);
        break;

        case 6:
            printf("Thoat Chuong Trinh!\n");
        break;

        default:
            printf("Lua Chon Khong Hop Le!\n");
        break;
    }
    }while (choice != 6);
return 0;
}
