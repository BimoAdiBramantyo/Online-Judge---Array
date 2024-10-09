#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int X;
        scanf("%d", &X);

        int array[X][X];
        int columnSums[X];
        
        for (int i = 0; i < X; i++) {
            columnSums[i] = 0; // Initialize column sums
        }

        for (int i = 0; i < X; i++) {
            for (int j = 0; j < X; j++) {
                scanf("%d", &array[i][j]);
                columnSums[j] += array[i][j];
            }
        }

        printf("Case #%d: ", t);
        for (int j = 0; j < X; j++) {
            printf("%d", columnSums[j]);
            if (j < X - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

