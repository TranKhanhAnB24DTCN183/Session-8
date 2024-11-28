#include <stdio.h>

int main() {
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
    	printf("Phan tu thu %d :",i+1);
        scanf("%d", &arr[i]);
    }
    int i,j;
    int max = arr[0];

    for ( i = 0; i < n; i++) {
        
        if (arr[i] != -1) {
            for ( j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) { 
                    arr[j] = -1;
                }
            }
        }
    }
    if (arr[i] == arr[j]) {
	printf("Phan tu xuat hien nhieu nhat trong mang la: %d\n", max); 
    }
    return 0;
}

