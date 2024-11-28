#include <stdio.h>

int main() {
    int m = 3, n = 3;  
    int arr[3][3] = {
        {1,2,3},
        {16,17,18},
        {10,11,12}
    };

    int sum = 0;

    for (int j = 0; j < n; j++) {
        sum += arr[0][j];//In ra 1,2,3
    }

  
    for (int i = 1; i < m; i++) {
        sum += arr[i][n-1];//In ra 18,12
    }

    if (m > 1) {
        for (int j = n - 2; j >= 0; j--) //j=1,j=0
		{
            sum += arr[m-1][j];//In ra 11,10
        }
    }

    if (n > 1) {
        for (int i = m - 2; i > 0; i--)//i=1 
		{
            sum += arr[i][0];//In ra 16
        }
    }

    printf("Tong phan tu tren bien cua ma tran la: %d\n", sum);

    return 0;
}

