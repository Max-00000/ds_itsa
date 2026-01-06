#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    while (n--) {
        int m;
        scanf("%d", &m);
        printf("%d %d %d\n", m, m * m, m * m * m);
    }

    return 0;
}
