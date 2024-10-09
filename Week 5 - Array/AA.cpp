#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int N;
    scanf("%d", &N);
    
    int rooms[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &rooms[i]);
    }
    
    qsort(rooms, N, sizeof(int), compare);
    
    int happyGuests = 0;
    for(int i = 0; i < N; i++) {
        if(i == 0 || rooms[i] != rooms[i-1]) {
            happyGuests++;
        }
    }
    
    printf("%d\n", happyGuests);
    return 0;
}

