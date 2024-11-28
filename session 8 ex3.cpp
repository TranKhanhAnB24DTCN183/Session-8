#include<stdio.h>
int main(){
	int x;
	printf("Nhap so nguyen :");
	scanf("%d",&x);
	int  arr[x][x];
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
		  printf("Nhap so vao arr[%d][%d] :",i,j);
	      scanf("%d",&arr[i][j]);
		}
	}
	printf("In ra hinh vuong :\n");
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
		  printf("%3d",arr[i][j]);
	      
		}
		printf("\n");
	}
	 return 0;
	
}
