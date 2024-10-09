#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        char N[20];
        scanf("%s", N);

        int length = strlen(N);
        printf("Case #%d: %d\n", t, length);
    }

    return 0;
}

