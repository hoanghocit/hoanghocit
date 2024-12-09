#include<stdio.h>
int numberMax(int arr[], int size) {
int max = arr[0];
for (int i = 1; i < size; i++) {
if (arr[i] > max) {
max = arr[i];
}
}
return max;
}
int main() {
int mang[] = {1, 2, 3, 4, 5};
int kichthuoc = sizeof(mang) / sizeof(mang[0]);
int max = numberMax(mang, kichthuoc);
printf("So Lon Nhat Cua Mang La: %d\n", max);
return 0;
}
