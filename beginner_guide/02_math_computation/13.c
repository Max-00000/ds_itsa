#include <stdio.h>
#include <math.h>

int main() {

    int w, h;
    scanf("%d %d", &w, &h);
    printf("%.2lf\n", round(w / ((double)h * h / 10000) * 100) / 100);

    return 0;
}
