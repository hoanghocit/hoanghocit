#include<stdio.h>
#include<string.h>
struct student{
    int id;
    char name[50];
};
void printMenu(){
    printf("--MENU--\n");
    printf("1. Hien Thi Danh Sach Sinh Vien\n");
    printf("2. Them Sinh Vien\n");
    printf("3. Sua Thong Tin Sinh Vien\n");
    printf("4. Xoa Sinh Vien\n");
    printf("5. Sap Xep Danh Sach Sinh Vien\n");
    printf("6. Tim Kiem Sinh Vien\n");
    printf("7. Thoat\n");
}
void displaystudents(struct student students[], int size){
    for(int i = 0; i < size; i++){
        printf("%d. Ten: %s\n", students[i].id, students[i].name);
    }
}

int main(){
    struct student students[100] = {
        {1, "Vu Duc Hoang"},
        {2, "Le Tien Duc"},
        {3, "Tran Dang Viet"}
    };
    int size = 3;
    int choice;
    int pos;

    do{
        printMenu();
        printf("Lua Chon Cua Ban: ");
        scanf("%d", &choice);
        switch(choice){
        case 1:
            displaystudents(students, size);
        break;
        case 2: {
            struct student newstudent;
            printf("Nhap Vi Tri Can Them: ");
            scanf("%d", &pos);
            printf("Nhap ID Sinh Vien: ");
            scanf("%d", &newstudent.id);
            printf("Nhap Ten Sinh Vien: ");
            scanf("%s", newstudent.name);
            if(size >= 100 || pos < 1 || pos > size + 1){
                printf("Vi Tri Khong Hop Le.\n");
            }else{
            for(int i = size; i >= pos; i--){
            	students[i] = students[i - 1];
            }
                students[pos - 1] = newstudent;
                size++;
                printf("Them Thanh Cong!\n");
            }
            break;
        }

        case 3: {
            printf("Nhap Vi Tri Can Sua: ");
            scanf("%d", &pos);
            if(pos < 1 || pos > size){
                printf("Vi Tri Khong Hop Le!\n");
            }else{
                printf("Nhap ID Moi: ");
                scanf("%d", &students[pos - 1].id);
                printf("Nhap Ten Moi: ");
                scanf("%s", students[pos - 1].name);
                printf("Sua Thanh Cong!\n");
            }
            break;
        }

        case 4: {
            printf("Nhap Vi Tri Can Xoa: ");
            scanf("%d", &pos);
            if(pos < 1 || pos > size){
                printf("Vi Tri Khong Hop Le!\n");
            }else{
                for(int i = pos - 1; i < size - 1; i++){
                    students[i] = students[i + 1];
                }
                size--;
                printf("Xoa Thanh Cong!\n");
            }
            break;
        }

        case 5: {
            for(int i = 0; i < size - 1; i++){
                for(int j = i + 1; j < size; j++){
                    if(strcmp(students[i].name, students[j].name) > 0){
                        struct student temp = students[i];
                        students[i] = students[j];
                        students[j] = temp;
                    }
                }
            }
            printf("Sap Xep Thanh Cong!\n");
            break;
        }

        case 6: {
            char name[50];
            printf("Nhap Ten Sinh Vien Can Tim: ");
            scanf("%s", name);
            for(int i = 0; i < size; i++){
                if(strcmp(students[i].name, name) == 0){
                    printf("Tim Thay: %d. Ten: %s\n", students[i].id, students[i].name);
                break;
                }
            }
            break;
        }

        case 7:
            printf("Thoat Chuong Trinh!\n");
            break;

        default:
            printf("Lua Chon Khong Hop Le!\n");
    	}
    }while (choice != 7);
return 0;
}
