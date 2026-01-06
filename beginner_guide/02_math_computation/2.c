#include <stdio.h>
#include <math.h>

int main() {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("Trapezoid area:%.1lf\n", round((a + b) * c * 0.5 * 10) / 10);
    
    return 0;
}
