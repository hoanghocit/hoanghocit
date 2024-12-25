#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    int id;
    char name[50];
    int age;
} Student;

Student students[100];
int count = 0;
void load() {
    FILE *file = fopen("bt01.txt", "rb");
    if (file) {
        count = fread(students, sizeof(Student), 100, file);
        fclose(file);
    }
}

void save() {
    FILE *file = fopen("bt01.txt", "wb");
    if (file) {
        fwrite(students, sizeof(Student), count, file);
        fclose(file);
    }
}

void print() {
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Age: %d\n", students[i].id, students[i].name, students[i].age);
    }
}

void add() {
    if (count < 100) {
        printf("Enter ID: ");
        scanf("%d", &students[count].id);
        printf("Enter Name: ");
        scanf(" %[^""]s", students[count].name);
        printf("Enter Age: ");
        scanf("%d", &students[count].age);
        count++;
    } else {
        printf("Danh sach da day!\n");
    }
}

void edit() {
    int id;
    printf("MOi nhap ID de chinh sua: ");
    scanf("%d", &id);
     for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("Enter new Name: ");
            getchar(); 
            fgets(students[i].name, sizeof(students[i].name), stdin);
            students[i].name[strcspn(students[i].name, "\n")] = 0; 
            printf("Enter new Age: ");
            scanf("%d", &students[i].age);
            printf("Sinh vien da duoc cap nhat thanh cong.\n");
            return;
        }
    }
    printf("Sinh viên không tìm th?y!\n");
}

void delete() {
    int id;
    printf("Moi nhap ID muon xoa: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }
            count--;
            printf("Hoc sinh da duoc xoa thanh cong.\n");
            return;
        }
    }
    printf("Khong tim thay hoc sinh nay!\n");
}

void search() {
    int id;
    printf("Nhap Id muon tim kiem: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("ID: %d, Name: %s, Age: %d\n", students[i].id, students[i].name, students[i].age);
            return;
        }
    }
    printf("Khong tim thay hoc sinh nay!\n");
}

void sort() {
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (students[i].id > students[j].id) {
                Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
    printf("Hoc sinh da duoc sap xep bang ID.\n");
}

int main() {
    load();
    int choice;
    do {
    printf("\nMENU\n");
    printf("1. In danh sach sinh vien\n");
    printf("2. Them sinh vien\n");
    printf("3. Sua thong tin sinh vien\n");
    printf("4. Xoa sinh vien\n");
    printf("5. Tim kiem sinh vien\n");
    printf("6. Sap xep danh sach sinh vien\n");
    printf("7. Thoat\n");
    printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: print(); break;
            case 2: add(); break;
            case 3: edit(); break;
            case 4: delete(); break;
            case 5: search(); break;
            case 6: sort(); break;
            case 7: save(); break;
            default: printf("Moi ban nhap lai lua chon!\n");
        }
    } while (choice != 7);
    return 0;
}

