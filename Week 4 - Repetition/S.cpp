#include <stdio.h>

int main() {
    int N, P;
    scanf("%d %d", &N, &P);
    
    int count = 0;
    for (int i = 0; i < N; i++) {
        int toughness;
        scanf("%d", &toughness);
        if (P > toughness) {
            count++;
        }
    }
    
    printf("%d\n", count);
    return 0;
}

