#include <stdio.h>
#include <math.h>

int main() {

    int n;
    scanf("%d", &n);
    if (n <= 800) {
        printf("%.1lf\n", round(n * 0.9 * 10) / 10);
    } else if (n < 1500) {
        printf("%.1lf\n", round(n * 0.9 * 0.9 * 10) / 10);
    } else {
        printf("%.1lf\n", round(n * 0.9 * 0.79 * 10) / 10);
    }

    return 0;
}
