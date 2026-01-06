#include <stdio.h>
#include <math.h>

int main() {

    int n;
    scanf("%d", &n);
    while (n--) {
        double m;
        scanf("%lf", &m);
        printf("%.1lf\n", round(m * m * 10) / 10);
    }
    
    return 0;
}
