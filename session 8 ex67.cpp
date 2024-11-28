#include <stdio.h>

int main() {
    int arr[3][3] = {
        {1,2,3},
        {16,17,18},
        {10,11,12}
    };

    int sum = 0;
    sum=arr[0][0]+arr[1][1]+arr[2][2];
    printf("Tong duong cheo chinh cua ma tran la %d",sum);
       return 0;
}
