#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);

        int table[N][N];
        int columnSums[N];

        // Initialize column sums to 0
        for (int i = 0; i < N; i++) {
            columnSums[i] = 0;
        }

        // Read the table and calculate column sums
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &table[i][j]);
                columnSums[j] += table[i][j];
            }
        }

        // Print the result for this test case
        printf("Case #%d: ", t);
        for (int j = 0; j < N; j++) {
            printf("%d", columnSums[j]);
            if (j < N - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

