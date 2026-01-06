#include <stdio.h>
#include <math.h>

int main() {

    int t, s;
    scanf("%d %d", &t, &s);
    double res;
    if (t <= 60) {
        res = t * s;
    } else if (t <= 120) {
        res = 60 * s + (t - 60) * s * 1.33;
    } else {
        res = 60 * s + 60 * s * 1.33 + (t - 120) * s * 1.66;
    }
    printf("%.1lf\n", round(res * 10) / 10);

    return 0;
}
