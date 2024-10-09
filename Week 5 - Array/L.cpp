#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N], B[N], result[N];

    // Read sequence A
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Read values B
    for (int i = 0; i < N; i++) {
        scanf("%d", &B[i]);
    }

    // Place values B into result array based on sequence A
    for (int i = 0; i < N; i++) {
        result[A[i]] = B[i];
    }

    // Print the result array
    for (int i = 0; i < N; i++) {
        printf("%d", result[i]);
        if (i < N - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}

