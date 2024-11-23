#include <stdio.h>
int main() {
    int dauthang, cuoithang, sodien, tiendien;
    printf("Ban Hay Nhap So Dien Dau Thang: ");
    scanf("%d", &dauthang);
    printf("Ban Hay Nhap So Dien Cuoi Thang: ");
    scanf("%d", &cuoithang);
    
    if (dauthang > cuoithang) {
    printf("Dau Thang Khong Duoc Lon Hon Cuoi Thang");
    }
    
    sodien = cuoithang - dauthang;

    if (sodien < 50) {
    tiendien = sodien * 10000;
    printf("Tien Dien Thang Nay Cua Ban La: %d VNÐ", tiendien);
    }else if (sodien >= 50 && sodien < 100) {
    tiendien = sodien * 15000;
    printf("Tien Dien Thang Nay Cua Ban La: %d VNÐ", tiendien);
    }else if (sodien >= 100 && sodien < 150) {
    tiendien = sodien * 20000;
    printf("Tien Dien Thang Nay Cua Ban La: %d VNÐ", tiendien);
    }else if (sodien >= 150 && sodien < 200) {
    tiendien = sodien * 25000;
    printf("Tien Dien Thang Nay Cua Ban La: %d VNÐ", tiendien);
    }else{
    tiendien = sodien * 30000;
    printf("Tien Dien Thang Nay Cua Ban La: %d VNÐ", tiendien);
    }
return 0;
}

