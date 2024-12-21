#include <stdio.h>
#include <string.h>
void printmenu() {
    printf("--MENU--\n");
    printf("1. In Ra Gia Tri Cac Phan Tu Co Trong Menu Mon An Theo Dang 1.member.value\n");
    printf("2. Them Mot Phan Tu Vao Vi Tri Chinh Dinh\n");
    printf("3. Sua Mot Phan Tu O Vi Tri Chi Dinh\n");
    printf("4. Xoa Mot Phan Tu O Vi Tri Chi Dinh\n");
    printf("5. Sap Xep Cac Phan Tu\n");
    printf("6. Tim Kiem Phan Tu Theo name Nhap Vao\n");
    printf("7. Thoat\n");
}
struct Dish {
    int id;
    char name[50];
    float price;
};
void dishMenu(struct Dish menu[], int size) { 
    for(int i = 0; i < size; i++) {
        printf("%d. Ten Mon: %s - Gia Tien: %.2f\n", menu[i].id, menu[i].name, menu[i].price);
    }
}
int main() {
    struct Dish menu[100] = {
        {1, "Banh Mi", 150000},
        {2, "Pho", 300000},
        {3, "Ga Ran", 300000},
        {4, "Banh Ran", 3000},
        {5, "Tra Sua", 40000}
    };
    int size = 5;
    int choice;
    int pos;
    do{
        printmenu();
        printf("Ban Hay Nhap Lua Chon: ");
        scanf("%d", &choice);
        switch(choice){
        case 1:
            dishMenu(menu, size);
        break;
        case 2: {
            struct Dish newdish;
            printf("Nhap Vi Tri Can Them: ");
            scanf("%d", &pos);
            printf("Nhap ID Mon An: ");
            scanf("%d", &newdish.id);
            printf("Nhap Ten Mon An: ");
            scanf("%s", newdish.name);
            printf("Nhap Gia Mon An: ");
            scanf("%f", &newdish.price);
            if(size >= 100 || pos < 1 || pos > size + 1){
                printf("Vi Tri Khong Hop Le.\n");
            }else{
                for(int i = size; i >= pos; i--){
                    menu[i] = menu[i - 1];
                }
                    menu[pos - 1] = newdish;
                    size++;
                }
            break;
        }
        case 3: {
            struct Dish editeddish;
                printf("Nhap Vi Tri Can Sua: ");
                scanf("%d", &pos);
                if(pos < 1 || pos > size){
                    printf("Vi Tri Khong Hop Le.\n");
                }else{
                    printf("Nhap ID Mon Can Sua: ");
                    scanf("%d", &editeddish.id);
                    printf("Nhap Ten Mon Can Sua: ");
                    scanf("%s", editeddish.name);
                    printf("Nhap Gia Mon Can Sua: ");
                    scanf("%f", &editeddish.price);
                    menu[pos - 1] = editeddish;
                }
            break;
        }
        case 4: {
            printf("Nhap Vi Tri Can Xoa: ");
            scanf("%d", &pos);
            if(pos < 1 || pos > size){
                printf("Vi Tri Khong Hop Le.\n");
            }else{
                for(int i = pos - 1; i < size - 1; i++){
                    menu[i] = menu[i + 1];
                }
                size--;
            }
        break;
        }
        case 5: {
            for(int i = 0; i < size - 1; i++){
                for(int j = i + 1; j < size; j++){
                    if(menu[i].price > menu[j].price){
                        struct Dish temp = menu[i];
                        menu[i] = menu[j];
                        menu[j] = temp;
                    }
                }
            }
            printf("Sap Xep Theo Gia Tang Dan Thanh Cong!\n");
        break;
        }
        case 6: {
            char name[50];
            printf("Nhap Ten Mon Can Tim: ");
            scanf("%s", name);
            for(int i = 0; i < size; i++){
                if(strcmp(menu[i].name, name) == 0) {
                    printf("Tim Thay Mon: %d. Ten Mon: %s - Gia Tien: %.2f\n", menu[i].id, menu[i].name, menu[i].price);
                    break;
                }
            }
        break;
        }
        case 7:
            printf("Thoat Chuong Trinh.\n");
        break;
        default:
            printf("Lua Chon Khong Ton Tai!\n");
        }
    }while(choice != 7);
return 0;
}
