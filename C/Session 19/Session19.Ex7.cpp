#include<stdio.h>
#include<string.h>

struct student{
    int id;
    char name[50];
    int age;
    char phone[15];
};

int main(){
    struct student students[5] = {
        {1, "Vu Duc Hoang", 20, "0971723266"},
        {2, "Le Tien Duc", 21, "0944221809"},
        {3, "Tran Dang Viet", 19, "0940024382"},
        {4, "Hoang Van Truong", 22, "0938939669"},
        {5, "Le Quoc Huy", 23, "0914822063"}
    };
    int size = 5;
    printf("Danh Sach Sinh Vien Ban Dau:\n");
    for(int i = 0; i < size; i++){
        printf("%d. Ten: %s, Tuoi: %d, So Dien Thoai: %s\n", students[i].id, students[i].name, students[i].age, students[i].phone);
    	}
    int iddel;
    printf("\nNhap ID Sinh Vien Can Xoa: ");
    scanf("%d", &iddel);
    int found = 0;
    for(int i = 0; i < size; i++){
        if(students[i].id == iddel){
            found = 1;
            for(int j = i; j < size - 1; j++){
                students[j] = students[j + 1];
            }
            size--;
            printf("Xoa Thanh Cong Sinh Vien Co ID: %d\n", iddel);
            break;
        }
    }
    if(!found){
        printf("Khong Tim Thay Sinh Vien Co ID: %d\n", iddel);
    }
    printf("\nDanh Sach Sinh Vien Sau Khi Xoa:\n");
    for(int i = 0; i < size; i++){
        printf("%d. Ten: %s, Tuoi: %d, So Dien Thoai: %s\n", students[i].id, students[i].name, students[i].age, students[i].phone);
    }
    return 0;
}
