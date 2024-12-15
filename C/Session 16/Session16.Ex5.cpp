#include<stdio.h>
void arr(int *mang, int size){
    printf("Phan Tu Trong Mang: \n");
    for(int i = 0; i < size; i++){
    printf("arr[%d] = %d\n", i, mang[i]);
    }
    printf("\n");
}
void update(int *mang, int size, int vitri, int giatri){
    mang[vitri] = giatri;
}

int main() {
    int mang[] = {1, 2, 3, 4, 5};
    int size = sizeof(mang) / sizeof(mang[0]);
    printf("Mang Ban Dau:\n");
    arr(mang, size);
    int vitri, giatri;
    printf("Nhap Vi Tri Moi: ");
    scanf("%d", &vitri);
    printf("Nhap Gia Tri Moi: ");
    scanf("%d", &giatri);
    update(mang, size, vitri, giatri);
    printf("Mang Da Cap Nhat:\n");
    arr(mang, size);
return 0;
}
