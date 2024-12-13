#include <stdio.h>
#include <string.h>
int main() {
    char str[]="jahdsjhajshdja";
    str[strcspn(str, "\n")] = '\0'; 
    printf("So lan xuat hien cua moi ky tu:\n");
    for (int i = 0; i < strlen(str); i++) {
        int count = 0;
        for (int j = 0; j < strlen(str); j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        int alreadyCounted = 0;
        for (int k = 0; k < i; k++) {
            if (str[k] == str[i]) {
                alreadyCounted = 1;
                break;
            }
        }    
        if (alreadyCounted == 0) {
            printf("Ky tu '%c' xuat hien %d lan.\n", str[i], count);
        }
    }
    return 0;
}
