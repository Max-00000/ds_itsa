#include <stdio.h>

int main() {

    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d+%d=%d\n", a, b, a + b);
    printf("%d*%d=%d\n", a, b, a * b);
    printf("%d-%d=%d\n", a, b, a - b);
    int q = a/b - (a%b < 0);
    int m = a - b * q;
    printf("%d/%d=%d...%d\n", a, b, q, m);

    return 0;
}
