#include <stdio.h>
#include <math.h>

int main() {

    int n;
    scanf("%d", &n);
    printf("km=%.1lf\n", round(n * 1.6 * 10) / 10);

    return 0;
}
