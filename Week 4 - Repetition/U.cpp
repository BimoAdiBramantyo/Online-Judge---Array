#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);

        char S[N + 1];
        scanf("%s", S);

        int lili_wins = 0, bibi_wins = 0;

        for (int i = 0; i < N; i++) {
            if (S[i] == 'L') {
                lili_wins++;
            } else if (S[i] == 'B') {
                bibi_wins++;
            }
        }

        if (lili_wins > bibi_wins) {
            printf("Lili\n");
        } else if (bibi_wins > lili_wins) {
            printf("Bibi\n");
        } else {
            printf("None\n");
        }
    }

    return 0;
}

