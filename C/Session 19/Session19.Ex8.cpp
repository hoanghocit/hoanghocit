#include<stdio.h>
#include<string.h>
struct student {
    int id;
    char name[50];
    int age;
    char phone[15];
};

int main() {
    struct student students[5] = {
        {1, "Vu Duc Hoang", 20, "0971723266"},
        {2, "Le Tien Duc", 21, "0944221809"},
        {3, "Tran Dang Viet", 19, "0940024382"},
        {4, "Hoang Van Truong", 22, "0938939669"},
        {5, "Le Quoc Huy", 23, "0914822063"}
    };
    int size = 5;
    printf("Danh Sach Sinh Vien:\n");
    for(int i = 0; i < size; i++){
        printf("%d. Ho Ten: %s - Tuoi: %d - So Dien Thoai: %s\n", students[i].id, students[i].name, students[i].age, students[i].phone);
    }
    for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if(strcmp(students[i].name, students[j].name) > 0){
                struct student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
    printf("\n");
    printf("Danh Sach Sinh Vien Da Sap Xep:\n");
    for(int i = 0; i < size; i++){
        printf("%d. Ho Ten: %s - Tuoi: %d - So Dien Thoai: %s\n", students[i].id, students[i].name, students[i].age, students[i].phone);
    }
return 0;
}
