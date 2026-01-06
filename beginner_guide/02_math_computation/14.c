#include <stdio.h>
#include <math.h>

int main() {

    int d;
    scanf("%d", &d);
    printf("%.0lf\n", ceil(d / (1 - 30 * 2.54 * 0.01)));

    return 0;
}
