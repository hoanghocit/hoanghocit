#include<stdio.h>
#include<string>
typedef struct{
	int bookID;
	char name[100];
	float price;
}Books;
Books books[100];
int count= 0;
void inputBooks(){
	printf("Nhap so luong sach ");
	scanf("%d",&count);
	for(int i=0;i<count;i++){
	printf("\nNhap thong tin sach thu %d la: ",i+1);
	printf("Ma sach ");
	scanf("%d",&books[i].bookID);
	getchar();
	printf("Ten sach ");
	fgets(books[i].name,100,stdin);
	printf("Gia sach");
	scanf("%f",&books[i].price);
   }	
}
void displayBooks(){
	printf("Danh sach sach \n");
	for(int i=0;i<count;i++){
		printf("Ma sach:%d\n",books[i].bookID);
		printf("Ten sach:%s\n",books[i].name);
		printf("Gia sach:%.2f\n",books[i].price);
		printf("...............\n");
	}
}
void addBooks(){
if(count >= 100){
	printf("Danh sach da day k the them!\n");
	return;
}
printf("Thong tin sach moi \n");
printf("Ma sach: ");
scanf("%d",books[count].bookID);
getchar();
printf("Ten sach ");
fgets(books[count].name,100,stdin);
printf("Gia sach");
scanf("%f",&books[count].price);
count++;
printf("\nDanh sach da dc them thanh cong\n");
}
void deleteBooks(){
	int bookID;
	printf("Moi nhap ma sach can xoa");
	scanf("%d",&bookID);
	int found=0;
	for(int i=0;i<count;i++){
		    if (books[i].bookID == bookID) {
            for (int j = i; j < count - 1; j++) {
                books[j] = books[j + 1];
				
			}
			count--;
			found=1;
			printf("Sach co ma %d da duoc xoa",bookID);
			break;
		}
	}
	if(!found){
		printf("KO tim thay sach voi ma %d",bookID);
	}
}
void updateBook(){
	int bookID;
	printf("Nhap thong tin ma sach can cap nhat: ");
	scanf("%d",bookID);
	int found = 0;
	for(int i=0;i<count;i++){
		if(books[i].bookID==bookID);
		printf("Nhap lai ten sach");
		getchar();
		fgets(books[i].name,100,stdin);
		printf("Nhap lai gia sach");
		scanf("%f",&books[i].price);
		found=1;
		printf("Gia sach da duoc cap nhat");
		break;
	}
	if(!found){
		printf("KHong tim thay sach voi ma %d",bookID);
	}
}
void sortBook(){
	int choice;
	printf("CHon cach sap xep\n");
	printf("1.Sap xep theo gia tang dan\n");
	printf("2.Sap xep theo gia giam dan\n");
	printf("MOI nhap lua chon cua ban\n");
	scanf("%d",choice);
	for(int i=0;i<count-1;i++){
		for(int j=i+1;j<count;j++){
		if ((choice == 1 && books[i].price > books[j].price) ||
                (choice == 2 && books[i].price < books[j].price)) {
                Books temp = books[i];
                books[i] = books[j];
                books[j] = temp;
			   }
		}
	}
	printf("Sap xep sach thanh cong!n");
}
void searchBook() {
    char name[100];
    printf("Nhap ten sach can tim: ");
    getchar();  // Ð?c ký t? newline du th?a
    fgets(name, 100, stdin);
    int found = 0;
    for (int i = 0; i < count; i++) {
        // Tìm ki?m tên sách trong danh sách sách
        if (strstr(books[i].name, name) != NULL) {
            printf("Ma sach: %d\n", books[i].bookID);
            printf("Ten sach: %s\n", books[i].name);
            printf("Gia sach: %.2f\n", books[i].price);
            found = 1;
        }
    }
    if (!found) {
        printf("Sach khong duoc tim thay!\n");
    }
}
int menu(){
	int choice;
	do{
		printf("\nMENU\n");
        printf("1. Nh?p s? lu?ng và thông tin sách.\n");
        printf("2. Hi?n th? thông tin sách.\n");
        printf("3. Thêm sách vào v? trí.\n");
        printf("4. Xóa sách theo mã sách.\n");
        printf("5. C?p nh?t thông tin sách theo mã sách.\n");
        printf("6. S?p x?p sách theo giá (tang/gi?m).\n");
        printf("7. Tìm ki?m sách theo tên sách.\n");
        printf("8. Thoát.\n");
        printf("L?a ch?n c?a b?n: ");
        scanf("%d", &choice);
    switch(choice){
    	case 1:{
    		inputBooks;
			break;
		}
		case 2:{
			displayBooks;
			break;
		}
		case 3:{
			addBooks;
			break;
		}
		case 4:{
			deleteBooks;
			break;
		}
		case 5:{
			updateBook;
			break;
		}
		case 6:{
			sortBook;
			break;
		}
		case 7:{
			searchBook;
			break;
		}
		case 8:{
			printf("Chuong trinh ket thuc");
			break;
		}
		default:
			printf("Lua chon ko hop le moi nhap lai");
			
	}
	}while (choice!=8);
	return 0;
}


