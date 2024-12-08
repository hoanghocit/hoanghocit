#include<stdio.h>
int main() {
    int mang[100];
    int soLuong = 0;
    int luaChon;

    do {
        printf("\nMENU\n");
        printf("1. Nhap so luong va gia tri cho cac phan tu\n");
        printf("2. In mang (mang[0]=..., mang[1]=...)\n");
        printf("3. Dem so luong so hoan hao\n");
        printf("4. Dem so luong so nguyen to\n");
        printf("5. Tim gia tri lon thu 2 (Khong sap xep)\n");
        printf("6. Tim gia tri nho thu 2 (Khong sap xep)\n");
        printf("7. Them phan tu tai vi tri\n");
        printf("8. Xoa phan tu tai vi tri\n");
        printf("9. Sap xep mang tang dan (sap xep chen)\n");
        printf("10. Sap xep mang giam dan (sap xep chen)\n");
        printf("11. Tim kiem phan tu (Tim kiem nhi phan)\n");
        printf("12. Xoa phan tu trung lap va in phan tu doc nhat\n");
        printf("13. Sap xep va hien thi so chan dung truoc, so le dung sau\n");
        printf("14. Dao nguoc mang\n");
        printf("15. Thoat\n");
        printf("Moi ban nhap lua chon : ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                printf("Nhap so luong phan tu (toi da 100): ");
                scanf("%d", &soLuong);
                if (soLuong <= 0 || soLuong > 100) {
                    printf("So luong khong hop le!\n");
                    soLuong = 0;
                } else {
                    for (int i = 0; i < soLuong; i++) {
                        printf("Nhap gia tri cho mang[%d]: ", i);
                        scanf("%d", &mang[i]);
                    }
                }
                break;

            case 2:
                if (soLuong == 0) {
                    printf("Mang dang khong co phan tu!\n");
                } else {
                    printf("Mang hien tai: ");
                    for (int i = 0; i < soLuong; i++) {
                        printf("mang[%d]=%d ", i, mang[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                int demHoanHao = 0;
                for (int i = 0; i < soLuong; i++) {
                    int tongUoc = 0;
                    for (int j = 1; j <= mang[i] / 2; j++) {
                        if (mang[i] % j == 0) tongUoc += j;
                    }
                    if (tongUoc == mang[i]) demHoanHao++;
                }
                printf("So luong so hoan hao: %d\n", demHoanHao);
                break;

            case 4:
                int demNguyenTo = 0;
                for (int i = 0; i < soLuong; i++) {
                    int nguyenTo = mang[i] > 1;
                    for (int j = 2; j * j <= mang[i] && nguyenTo; j++) {
                        if (mang[i] % j == 0) nguyenTo = 0;
                    }
                    if (nguyenTo) demNguyenTo++;
                }
                printf("So luong so nguyen to: %d\n", demNguyenTo);
                break;

            case 5:
                if (soLuong < 2) {
                    printf("Mang phai tu 2 phan tu tro len!\n");
                } else {
                    int lonNhat = mang[0], lonThuHai = -2147483647;
                    for (int i = 1; i < soLuong; i++) {
                        if (mang[i] > lonNhat) {
                            lonThuHai = lonNhat;
                            lonNhat = mang[i];
                        } else if (mang[i] > lonThuHai && mang[i] < lonNhat) {
                            lonThuHai = mang[i];
                        }
                    }
                    printf("Gia tri lon thu hai: %d\n", lonThuHai);
                }
                break;

            case 6:
                if (soLuong < 2) {
                    printf("Mang phai tu 2 phan tu tro len\n");
                } else {
                    int nhoNhat = mang[0], nhoThuHai = 2147483647;
                    for (int i = 1; i < soLuong; i++) {
                        if (mang[i] < nhoNhat) {
                            nhoThuHai = nhoNhat;
                            nhoNhat = mang[i];
                        } else if (mang[i] < nhoThuHai && mang[i] > nhoNhat) {
                            nhoThuHai = mang[i];
                        }
                    }
                    printf("Gia tri nho thu hai la: %d\n", nhoThuHai);
                }
                break;

            case 7:
                if (soLuong >= 100) {
                    printf("Mang da day khong the them phan tu\n");
                } else {
                    int giaTri, viTri;
                    printf("Nhap gia tri can them: ");
                    scanf("%d", &giaTri);
                    printf("Nhap vi tri can them (0-%d): ", soLuong);
                    scanf("%d", &viTri);
                    if (viTri < 0 || viTri > soLuong) {
                        printf("Vi tri khong hop le!\n");
                    } else {
                        for (int i = soLuong; i > viTri; i--) {
                            mang[i] = mang[i - 1];
                        }
                        mang[viTri] = giaTri;
                        soLuong++;
                        printf("Da them %d vao vi tri %d.\n", giaTri, viTri);
                    }
                }
                break;

            case 8:
                if (soLuong == 0) {
                    printf("Mang dang khong co phan tu\n");
                } else {
                    int viTriXoa;
                    printf("Nhap vi tri can xoa (0-%d): ", soLuong - 1);
                    scanf("%d", &viTriXoa);
                    if (viTriXoa < 0 || viTriXoa >= soLuong) {
                        printf("Vi tri khong hop le!\n");
                    } else {
                        for (int i = viTriXoa; i < soLuong - 1; i++) {
                            mang[i] = mang[i + 1];
                        }
                        soLuong--;
                        printf("Da xoa phan tu tai vi tri %d.\n", viTriXoa);
                    }
                }
                break;

            case 9:
                for (int i = 1; i < soLuong; i++) {
                    int key = mang[i], j = i - 1;
                    while (j >= 0 && mang[j] > key) {
                        mang[j + 1] = mang[j];
                        j--;
                    }
                    mang[j + 1] = key;
                }
                printf("Mang da sap xep tang dan.\n");
                break;

            case 10:
                for (int i = 1; i < soLuong; i++) {
                    int key = mang[i], j = i - 1;
                    while (j >= 0 && mang[j] < key) {
                        mang[j + 1] = mang[j];
                        j--;
                    }
                    mang[j + 1] = key;
                }
                printf("Mang da sap xep giam dan.\n");
                break;

            case 11:
                int giaTriTim;
                printf("Nhap gia tri can tim: ");
                scanf("%d", &giaTriTim);
                int trai = 0, phai = soLuong - 1;
                int timThay = 0;
                while (trai <= phai) {
                    int giua = (trai + phai) / 2;
                    if (mang[giua] == giaTriTim) {
                        printf("Tim thay %d tai vi tri %d.\n", giaTriTim, giua);
                        timThay = 1;
                        break;
                    }
                    if (mang[giua] < giaTriTim) {
                        trai = giua + 1;
                    } else {
                        phai = giua - 1;
                    }
                }
                if (!timThay) {
                    printf("%d khong ton tai trong mang.\n", giaTriTim);
                }
                break;

            case 12:
                int docNhat[100], docNhatSoLuong = 0;
                for (int i = 0; i < soLuong; i++) {
                    int trungLap = 0;
                    for (int j = 0; j < docNhatSoLuong; j++) {
                        if (mang[i] == docNhat[j]) {
                            trungLap = 1;
                            break;
                        }
                    }
                    if (!trungLap) {
                        docNhat[docNhatSoLuong++] = mang[i];
                    }
                }
                soLuong = docNhatSoLuong;
                printf("Mang sau khi xoa phan tu trung lap: ");
                for (int i = 0; i < soLuong; i++) {
                    printf("%d ", docNhat[i]);
                }
                printf("\n");
                break;

            case 13:
                int chan[100], le[100], soChan = 0, soLe = 0;
                for (int i = 0; i < soLuong; i++) {
                    if (mang[i] % 2 == 0) {
                        chan[soChan++] = mang[i];
                    } else {
                        le[soLe++] = mang[i];
                    }
                }
                for (int i = 0; i < soChan; i++) {
                    mang[i] = chan[i];
                }
                for (int i = 0; i < soLe; i++) {
                    mang[soChan + i] = le[i];
                }
                printf("Mang sau khi sap xep so chan truoc, so le sau: ");
                for (int i = 0; i < soLuong; i++) {
                    printf("%d ", mang[i]);
                }
                printf("\n");
                break;

            case 14:
                for (int i = 0, j = soLuong - 1; i < j; i++, j--) {
                    int temp = mang[i];
                    mang[i] = mang[j];
                    mang[j] = temp;
                }
                printf("Mang sau khi dao nguoc: ");
                for (int i = 0; i < soLuong; i++) {
                    printf("%d ", mang[i]);
                }
                printf("\n");
                break;

            case 15:
                printf("Ket thuc chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
                break;
        }
    } while (luaChon != 15);

    return 0;
}
