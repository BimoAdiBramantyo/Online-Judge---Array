#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T);

    int N[T];
    int *heights[T];

    for (int t = 0; t < T; t++) {
        scanf("%d", &N[t]);
        heights[t] = (int *)malloc(N[t] * sizeof(int));
        for (int i = 0; i < N[t]; i++) {
            scanf("%d", &heights[t][i]);
        }
    }

    for (int t = 0; t < T; t++) {
        int min_diff = abs(heights[t][1] - heights[t][0]);
        for (int i = 1; i < N[t] - 1; i++) {
            int diff = abs(heights[t][i + 1] - heights[t][i]);
            if (diff < min_diff) {
                min_diff = diff;
            }
        }

        printf("Case #%d: %d\n", t + 1, min_diff);
        free(heights[t]);
    }

    return 0;
}

