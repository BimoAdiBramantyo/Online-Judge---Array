#include <stdio.h>
#include <string.h>

int countDistinctCharacters(char* str) {
    int count[26] = {0};
    int distinctCount = 0;

    while (*str) {
        if (count[*str - 'a'] == 0) {
            distinctCount++;
        }
        count[*str - 'a']++;
        str++;
    }
    return distinctCount;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        char S[100001];
        scanf("%s", S);

        int distinctCount = countDistinctCharacters(S);
        printf("Case #%d: %s\n", t, (distinctCount % 2 == 0) ? "Yay" : "Ewwww");
    }

    return 0;
}

