#include<stdio.h>
    int main(){
	 int arr[5]={1,2,3,4,5};
	 int n = sizeof(arr) / sizeof(arr[0]);
	 int x;
	 int check=1;
	 printf("Nhap vao mot phan tu :");
	 scanf("%d",&x);
	 for(int i=0;i<n;i++){
	 	if(x==arr[i]){
	 	 printf("so vua nhap nam o phan tu %d",arr[i]);
	 	 check=0;
	 	 break;
		 }
	 }
	 if(check==1){
	 	printf("Khong nam trong mang");
	 }
	 return 0;
}
