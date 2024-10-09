#include <stdio.h>

void lazyCaterer(int n, int result[]) {
    for (int i = 0; i < n; i++) {
        result[i] = (i * (i + 1)) / 2 + 1;
    }
}

int main() {
    int T;
    scanf("%d", &T);

    int N[T];
    for (int t = 0; t < T; t++) {
        scanf("%d", &N[t]);
    }

    for (int t = 0; t < T; t++) {
        int result[N[t]];
        lazyCaterer(N[t], result);

        printf("Case #%d:", t + 1);
        for (int i = 0; i < N[t]; i++) {
            printf(" %d", result[i]);
        }
        printf("\n");
    }

    return 0;
}

