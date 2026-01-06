#include <stdio.h>

int main() {

    int a, b;
    scanf("%d %d", &a, &b);

    int x, y;
    scanf("%d %d", &x, &y);

    int k = ((x * 60 + y) - (a * 60 + b)) / 30;

    if (k <= 4) {
        printf("%d\n", k * 30);
    } else if (k <=8) {
        printf("%d\n", 4 * 30 + (k - 4) * 40);
    } else {
        printf("%d\n", 4 * 30 + 4 * 40 + (k - 8) * 60);
    }

    return 0;
}
