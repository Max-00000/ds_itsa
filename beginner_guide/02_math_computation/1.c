#include <stdio.h>
#include <math.h>

int main() {

    int a, b;
    scanf("%d %d", &a, &b);
    printf("Triangle area:%.1lf\n", round(a * b * 0.5 * 10) / 10);
    
    return 0;
}
