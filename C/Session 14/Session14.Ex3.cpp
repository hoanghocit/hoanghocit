#include<stdio.h>
#include<string.h>
void daochuoi(char chuoi[]){
    int size = strlen(chuoi);
    for(int i = 0; i < size; i++){
    printf("%c", chuoi[size - 1 - i]);
    }
    printf("\n");
}

int main(){
    char chuoi[] = "Vu Duc Hoang";
    printf("Chuoi Ban Dau: %s\n", chuoi);
    printf("Chuoi Dao Nguoc: ");
    daochuoi(chuoi);
return 0;
}
