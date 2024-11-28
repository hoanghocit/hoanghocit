#include<stdio.h>
int main(){
	int n;
	printf("Moi nhap vao so nguyen: ");
	scanf("%d",&n);
	int matrix[n][n];
	for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = n;
			}
        }
    printf("Ma tran vuong la:\n");    
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){		
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
