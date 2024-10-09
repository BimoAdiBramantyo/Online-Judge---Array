#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int position = 0;
    int dice_roll;
    int i = 0;

    do {
        scanf("%d", &dice_roll);
        position += dice_roll;

        switch (position) {
            case 9:
                position = 21;
                break;
            case 33:
                position = 42;
                break;
            case 76:
                position = 92;
                break;
            case 53:
                position = 37;
                break;
            case 80:
                position = 59;
                break;
            case 97:
                position = 88;
                break;
            default:
                break;
        }

        if (position > 30000) {
            position = 30000;
        }

        i++;
    } while (i < N);

    printf("%d\n", position);

    return 0;
}
