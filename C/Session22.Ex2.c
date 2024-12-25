
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char username[50];
    char password[50];
} Account;

void displayMenu();
void registerAccount();
int login();

int main() {
    int choice;
    do {
        displayMenu();
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                registerAccount();
                break;
            case 2:
                if (login()) {
                    printf("Dang nhap thanh cong!\n");
                } else {
                    printf("Dang nhap that bai!\n");
                }
                break;
            case 3:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon ko hop le.\n");
        }
    } while (choice != 3);

    return 0;
}

void displayMenu() {
    printf("MENU\n");
    printf("1. Dang ky\n");
    printf("2. Dang nhap\n");
    printf("3. Thoat\n");
}

void registerAccount() {
    Account newAccount;
    FILE *file = fopen("bt2.txt", "ab");
    if (!file) {
        printf("Ko the mo file.\n");
        return;
    }

    printf("Nhap tai khoan: ");
    scanf("%s", newAccount.username);
    printf("Nhap mat khau: ");
    scanf("%s", newAccount.password);

    fwrite(&newAccount, sizeof(Account), 1, file);
    fclose(file);
    printf("Dnag ky tai khoan!\n");
}

int login() {
    Account inputAccount, storedAccount;
    FILE *file = fopen("bt2.txt", "rb");
    if (!file) {
        printf("Ko the mo file.\n");
        return 0;
    }

    printf("Nhap tai khoan: ");
    scanf("%s", inputAccount.username);
    printf("Nhap mat khau: ");
    scanf("%s", inputAccount.password);

    while (fread(&storedAccount, sizeof(Account), 1, file)) {
        if (strcmp(storedAccount.username, inputAccount.username) == 0 &&
            strcmp(storedAccount.password, inputAccount.password) == 0) {
            fclose(file);
            return 1; 
        }
    }

    fclose(file);
    return 0; 
}
