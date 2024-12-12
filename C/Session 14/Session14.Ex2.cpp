#include<stdio.h>
#include<string.h>
void kytu(char chuoi[]){
    int size = strlen(chuoi);
    for(int i = 0; i < size; i++){
        printf("%c ", chuoi[i]);
    }
    printf("\n");
}

int main(){
    char chuoi[] = "Vu Duc Hoang";
    printf("Chuoi: ");
    kytu(chuoi);
return 0;
}
