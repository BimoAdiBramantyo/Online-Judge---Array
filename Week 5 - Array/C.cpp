#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int prices[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &prices[i]);
    }

    int Q;
    scanf("%d", &Q);

    for (int i = 1; i <= Q; i++) {
        int Ai, Bi;
        scanf("%d %d", &Ai, &Bi);

        prices[Ai - 1] = Bi;

        printf("Case #%d: ", i);
        for (int j = 0; j < N; j++) {
            printf("%d", prices[j]);
            if (j < N - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

