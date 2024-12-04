#include <stdio.h>
int main(){
    int arr[100]; 
    int size = 0; 
    int choice;
    do{
    printf("\nMENU\n");
    printf("1. Nhap So Phan Tu Va Gia Tri Cac Phan Tu\n");
    printf("2. In Gia Tri Cac Phan Tu Dang Quan Ly\n");
    printf("3. In Ra Gia Tri Lon Nhat Cua Mang\n");
    printf("4. In Ra Cac Phan Tu La So Nguyen To Trong Mang\n");
    printf("5. Them Mot Phan Tu Trong Mang\n");
    printf("6. Xoa Mot Phan Tu Trong Mang\n");
    printf("7. Sap Xep Mang Theo Thu Tu Tang Dan\n");
    printf("8. Tim Kiem Phan Tu Va In Ra Vi Tri index\n");
    printf("9. Thoat\n");
    printf("Lua Chon Cua Ban: ");
    scanf("%d", &choice);
    switch(choice){
    case 1:
    //Nhap Phan Tu Gia Tri Cua Phan Tu
    printf("Nhap So Phan Tu Cua Mang: ");
	scanf("%d", &size);
    if (size <= 0 || size > 100) {
    printf("So Phan Tu Cua Mang Khong Hop Le!\n");
    size = 0;
    }else{
    for(int i = 0; i < size; i++) {
    printf("Nhap Gia Tri Phan Tu arr[%d]: ", i);
    scanf("%d", &arr[i]);
    }
    break;
    case 2:
    //In Gia Tri Cac Phan Tu Dang Xu Ly
    if (size == 0) {
    printf("Mang Rong!\n");
    }else{
    printf("Cac Phan Tu Trong Mang: ");
    for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
    }
	printf("\n");
	}
	break;
	case 3:
    //In Gia Tri Lon Nhat Trong Mang
    if (size == 0) {
    printf("Mang Rong!\n");
    }else{
    int max = arr[0];
    for (int i = 1; i < size; i++) {
    if (arr[i] > max) max = arr[i];
    }
    printf("Gia Tri Lon Nhat Cua Mang: %d\n", max);
    }
    break;
    case 4:
    //In Ra Cac Phan Tu La So Nguyen To Cua Mang
    if (size == 0) {
    printf("Mang Rong!\n");
    }else{
    printf("Cac phan tu la so nguyen to: ");
    for (int i = 0; i < size; i++) {
    int isPrime = 1;
    if (arr[i] <= 1) isPrime = 0;
    for (int j = 2; j * j <= arr[i]; j++) {
    if (arr[i] % j == 0) {
    isPrime = 0;
    break;
    }
    }
    if (isPrime) {
    printf("%d ", arr[i]);
    }
    }
    printf("\n");
    }
    break;
    case 5:
    //Them Phan Tu Vao Ben Trong Mang
	if (size >= 100) {
    printf("Mang Da Day, Khong The Them Phan Tu!\n");
    }else{
    int value;
    printf("Nhap Gia Tri Can Them: ");
    scanf("%d", &value);
    arr[size] = value;
    size++;
    printf("Da Them %d Vao Mang.\n", value);
    }
    break;
    case 6:
    //Xoa 1 Phan Tu Trong Mang
    if (size == 0) {
    printf("Mang Rong, Khong Co Phan Tu De Xoa!\n");
    }else{
    int index;
    printf("Nhap Vi Tri Can Xoa (0 - %d): ", size - 1);
    scanf("%d", &index);
    if (index < 0 || index >= size) {
    printf("Vi Tri Khong Hop Le!\n");
    }else{
    for (int i = index; i < size - 1; i++) {
    arr[i] = arr[i + 1];
    }
    size--;
    printf("Da Xoa Phan Tu Tai Vi Tri %d.\n", index);
    }
	}
    break;
    case 7:
    //Xap Xep Mang Theo Thu Tu Tang Dan
    for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
    if (arr[i] > arr[j]) {
        int temp = arr[i];
        		   arr[i] = arr[j];
                            arr[j] = temp;
    }
    }
    }
	printf("Mang Da Duoc Xep Xep Theo Thu Tu Tang Dan.\n");
    break;
    case 8:
    //Tim Kiem Phan Tu Va In Vi Tri Ra index
    int value, found = 0;
    printf("Nhap Gia Tri Can Tim: ");
    scanf("%d", &value);
    printf("Vi Tri Cua Gia Tri %d Trong Mang: ", value);
    for (int i = 0; i < size; i++) {
    if (arr[i] == value) {
    printf("%d ", i);
    found = 1;
	}
    }
    if (!found) {
    printf("Khong Tim Thay Gia Tri %d Trong Mang.\n", value);
    }else{
    printf("\n");
    }
    break;
    case 9:
    //Thoat Chuong Trinh
    printf("Ket thuc chuong trinh.\n");
    break;
    }
    default: {
	printf("Lua Chon Khong Hop Le!\n");
    break;
    }
    }
    }while (choice != 9);
return 0;
}
