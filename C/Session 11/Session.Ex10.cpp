#include<stdio.h>
                suaPhanTu(arr, n, viTri, giaTri);
                break;
            case 5:
                printf("Nhap Vi Tri Muon Xoa: ");
                scanf("%d", &viTri);
                xoaPhanTu(arr, &n, viTri);
                break;
            case 6:
                menuSapXep();
                printf("Chon a (Giam Dan) Hoac b (Tang Dan): ");
                char chonSapXep;
                getchar();
                scanf("%c", &chonSapXep);
                if (chonSapXep == 'a') {
                    sapXepGiamDan(arr, n);
                    printf("Sap Xep Giam Dan:\n");
                    inMang(arr, n);
                } else if (chonSapXep == 'b') {
                    sapXepTangDan(arr, n);
                    printf("Sap Xep Tang Dan:\n");
                    inMang(arr, n);
                }
                break;
            case 7:
                printf("Nhap Phan Tu Can Tim: ");
                scanf("%d", &giaTri);
                printf("Tim Kiem Tuyen Tinh:\n");
                int viTriTuyenTinh = timKiemTuyenTinh(arr, n, giaTri);
                if (viTriTuyenTinh != -1) {
                    printf("Phan Tu %d Tim Thay O Vi Tri %d\n", giaTri, viTriTuyenTinh);
                }else{
                    printf("Phan Tu %d Khong Tim Thay\n", giaTri);
                }
                printf("Tim Kiem Nhi Phan:\n");
                int viTriNhiPhan = timKiemNhiPhan(arr, n, giaTri);
                if (viTriNhiPhan != -1) {
                    printf("Phan Tu %d Tim Thay O Vi Tri %d\n", giaTri, viTriNhiPhan);
                } else {
                    printf("Phan Tu %d Khong Tim Thay\n", giaTri);
                }
                break;
            case 8:
                printf("Thoat Chuong Trinh.\n");
                break;
            default:
                printf("Lua Chon Khong Ton Tai.\n");
        }
    }while(luaChon != 8);
return 0;
}
