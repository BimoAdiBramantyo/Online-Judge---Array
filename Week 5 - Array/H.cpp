#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long result[n][100];
    int nig[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        nig[i] = x;

        int matrix[x][x];
        long long resultColSums[x];

        for (int j = 0; j < x; j++)
        {
            resultColSums[j] = 0;
        }

        for (int j = 0; j < x; j++)
        {
            for (int k = 0; k < x; k++)
            {
                scanf("%d", &matrix[j][k]);
                resultColSums[k] += matrix[j][k];
            }
        }

        for (int j = 0; j < x; j++)
        {
            result[i][j] = resultColSums[j];
        }
    }

    for(int i = 0; i < n; i++) {
        printf("Case #%d:", i+1);

        for (int j = 0; j < nig[i]; j++) {
            printf(" %lld", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
