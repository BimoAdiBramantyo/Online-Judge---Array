#include <stdio.h>

void printPattern(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j || i + j == N - 1) {
                printf("*");
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

    for (int t = 0; t < T; t++) {
        int N;
        scanf("%d", &N);
        printPattern(N);
        if (t < T - 1) {
            printf("\n");
        }
    }

    return 0;
}

