#include <stdio.h>

void printFrame(int N, int M) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i == 0 || i == N - 1 || j == 0 || j == M - 1) {
                printf("#");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N, M;
        scanf("%d %d", &N, &M);

        printf("Case #%d:\n", t);
        printFrame(N, M);
    }

    return 0;
}

