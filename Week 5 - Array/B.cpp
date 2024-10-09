#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);

        int A[N], B[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        for (int i = 0; i < N; i++) {
            scanf("%d", &B[i]);
        }

        printf("Case #%d: ", t);
        for (int i = 0; i < N; i++) {
            int needed- = A[i] - B[i];
            printf("%d", needed);
            if (i < N - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

