#include <stdio.h>

int gcd(int x, int y) {
    while (y != 0) {
        int r = x%y;
        x = y;
        y = r;
    }
    return x;
}

int main() {

    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", gcd(a, b));

    return 0;
}
