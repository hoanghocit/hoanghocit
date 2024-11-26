#include<stdio.h>
int main() {
    int tram, chuc, donvi;
    for (int i = 100; i <= 999; i++) {
    tram = i / 100;
    chuc = (i / 10) % 10;
    donvi = i % 10; 
    int ketqua = (tram * tram * tram) + (chuc * chuc * chuc) + (donvi * donvi * donvi);
    if (ketqua == i) {
    printf("%d La Armstrong \n", i);
    }
    }
return 0;
}

