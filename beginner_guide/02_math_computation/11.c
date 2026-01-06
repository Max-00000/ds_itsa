#include <stdio.h>
#include <math.h>

int main() {

    double d;
    scanf("%lf", &d);
    printf("%.1lf\n", round((d * 9 / 5 + 32) * 10) / 10);

    return 0;
}
