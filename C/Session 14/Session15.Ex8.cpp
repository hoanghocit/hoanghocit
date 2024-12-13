#include <stdio.h>
#include <ctype.h>  
int main() {
    char str[] = "hello world";
    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0 || str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
    }   
    printf("Chuoi sau khi viet hoa cac chu cai dau la: %s\n", str);  
    return 0;
}
