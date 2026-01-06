#include <stdio.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

int main() {

    int n, mx = -1000;
    scanf("%d", &n);
    while (n--) {
        int x;
        scanf("%d", &x);
        mx = MAX(mx, x);
    }
    printf("%d\n", mx);

    return 0;
}
