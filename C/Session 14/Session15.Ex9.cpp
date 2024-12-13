#include <stdio.h>
#include <string.h>
int main() {
    char str[100], ch, result[100];
    int i, j = 0;
    printf("Nhap vao chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Nhap vao ky tu can xoa: ");
    scanf("%c", &ch);
    for(i = 0; i < strlen(str); i++) {
        if(str[i] != ch) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    printf("Chuoi sau khi xoa ky tu '%c': %s\n", ch, result);

    return 0;
}
