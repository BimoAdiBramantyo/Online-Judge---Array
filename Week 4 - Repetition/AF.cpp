#include <stdio.h>

int count_on_bits(int x) {
    int count = 0;
    while (x) {
        count += x & 1;
        x >>= 1;
    }
    return count;
}

int main() {
    int T;
    scanf("%d", &T);
    
    int sizes[T];
    int arrays[T][100]; // Assuming maximum N is 100 as per constraints
    
    for (int t = 0; t < T; t++) {
        scanf("%d", &sizes[t]);
        for (int i = 0; i < sizes[t]; i++) {
            scanf("%d", &arrays[t][i]);
        }
    }
    
    for (int t = 0; t < T; t++) {
        int N = sizes[t];
        int *array = arrays[t];
        int count_at_least_3 = 0;
        int count_less_than_3 = 0;
        
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                int xor_result = array[i] ^ array[j];
                if (count_on_bits(xor_result) >= 3) {
                    count_at_least_3++;
                } else {
                    count_less_than_3++;
                }
            }
        }
        
        printf("Case #%d: %d %d\n", t + 1, count_at_least_3, count_less_than_3);
    }
    
    return 0;
}

