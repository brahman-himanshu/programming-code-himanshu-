#include <stdio.h>
int main() {
    int rows = 6;
    int arr[6][6] = {
		{5, 0, 0, 0, 0},
        {1, 1, 0, 0, 0},
        {3, 5, 3, 0, 0},
        {4, 2, 1, 2, 0},
        {4, 5, 4, 5, 2}
    };
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j <= i; j++) {
            if (arr[i][j] != 0) {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}