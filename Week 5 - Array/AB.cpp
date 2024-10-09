#include <stdio.h>

#define MAX 50

void multiplyMatrices(int N, int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            result[i][j] = 0;
            for (int k = 0; k < N; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);

        int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX], temp[MAX][MAX], result[MAX][MAX];

        for (int k = 0; k < n; k++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &A[k][j]);
            }
        }

        for (int k = 0; k < n; k++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &B[k][j]);
            }
        }

        for (int k = 0; k < n; k++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &C[k][j]);
            }
        }

        multiplyMatrices(n, A, B, temp);
        multiplyMatrices(n, temp, C, result);

        printf("Case #%d:\n", i + 1);
        for (int k = 0; k < n; k++) {
            for (int j = 0; j < n; j++) {
                printf("%d", result[k][j]);
                if (j < n - 1)
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}

