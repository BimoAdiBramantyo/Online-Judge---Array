#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int v[N];
    int cumV[N+1];
    cumV[0] = 0;

    for(int i = 1; i <= N; i++) {
        scanf("%d", &v[i-1]);
        cumV[i] = cumV[i-1] + v[i-1];
    }

    int Q;
    scanf("%d", &Q);

    for(int i = 1; i <= Q; i++) {
        int A, B;
        scanf("%d %d", &A, &B);

        int total = cumV[B] - cumV[A-1];
        printf("Case #%d: %d\n", i, total);
    }

    return 0;
}
