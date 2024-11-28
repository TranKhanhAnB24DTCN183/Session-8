#include <stdio.h>

int main() {
 
    int arr[3][3] = {{1, 2, 3},{5, 4, 10},{20, 15, 25}};

    int max = arr[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j]; 
            }
        }
    }

    printf("Phan tu lon nhat %d", max);

    return 0;
}

