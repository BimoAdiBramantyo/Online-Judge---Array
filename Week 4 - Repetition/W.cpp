#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        int N;
        scanf("%d", &N);

        int odd_count = 0, even_count = 0;
        for (int i = 0; i < N; i++) {
            int num;
            scanf("%d", &num);
            if (num % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }

        printf("Odd group : %d integer(s).\n", odd_count);
        printf("Even group : %d integer(s).\n", even_count);
    }

    return 0;
}

