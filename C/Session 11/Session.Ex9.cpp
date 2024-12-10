#include<stdio.h>
int laSoNguyenTo(int n){
    if (n < 2){
	return 0;
	}
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0){
        	return 0;
		}
    }
    return 1;
}
void nhapMang(int arr[][100], int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("Nhap Phan Tu arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void inMang(int arr[][100], int n, int m){
    printf("\nMa Tran:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void inCacGoc(int arr[][100], int n, int m){
    printf("\nCac Phan Tu O Goc Cua Ma Tran:\n");
    printf("%d %d\n%d %d\n", arr[0][0], arr[0][m - 1], arr[n - 1][0], arr[n - 1][m - 1]);
}

void inDuongBien(int arr[][100], int n, int m){
    printf("\nCac Phan Tu Tren Duong Bien:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1){
                printf("%d ", arr[i][j]);
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

void inDuongCheo(int arr[][100], int n, int m){
    printf("\nCac Phan Tu Tren Duong Cheo Chinh Va Duong Cheo Phu:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (i == j || i + j == m - 1){
                printf("%d ", arr[i][j]);
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

void inSoNguyenTo(int arr[][100], int n, int m) {
    printf("\nCac Phan Tu La So Nguyen To:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (laSoNguyenTo(arr[i][j])){
                printf("%d ", arr[i][j]);
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

void hienThiMenu(){
    printf("\nMENU\n");
    printf("1. Nhap Gia Tri Cac Phan Tu Trong Mang\n");
    printf("2. In Gia Tri Cac Phan Tu Cua Mang Theo Ma Tran\n");
    printf("3. In Ra Cac Phan Tu O Goc Theo Ma Tran\n");
    printf("4. In Ra Cac Phan Tu Nam Tren Duong Bien Theo Ma Tran\n");
    printf("5. In Ra Cac Phan Tu Nam Tren Duong Cheo Chinh Va Cheo Phu Theo Ma Tran\n");
    printf("6. In Ra Cac Phan Tu La So Nguyen To Theo Ma Tran\n");
    printf("7. Thoat\n");
}

int main(){
    int n, m;
    int arr[100][100];

    printf("Nhap So Hang (n): ");
    scanf("%d", &n);
    printf("Nhap So Cot (m): ");
    scanf("%d", &m);

    int luaChon;
    do {
        hienThiMenu();
        printf("Nhap Lua Chon Cua Ban: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                nhapMang(arr, n, m);
                break;
            case 2:
                inMang(arr, n, m);
                break;
            case 3:
                inCacGoc(arr, n, m);
                break;
            case 4:
                inDuongBien(arr, n, m);
                break;
            case 5:
                inDuongCheo(arr, n, m);
                break;
            case 6:
                inSoNguyenTo(arr, n, m);
                break;
            case 7:
                printf("Thoat Chuong Trinh.\n");
                break;
            default:
                printf("Lua Chon Khong Ton Tai.\n");
		}
    }while (luaChon != 7);
return 0;
}
