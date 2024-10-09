#include <stdio.h>

int main() {
    int Q;
    scanf("%d", &Q);

    long long N = 1;

    for (int i = 0; i < Q; i++) {
        N = N * 2 + 1;
    }

    printf("%lld\n", N);

    return 0;
}
