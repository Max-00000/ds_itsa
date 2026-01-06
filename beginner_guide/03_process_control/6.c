#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    while (n--) {
        int x;
        scanf("%d", &x);
        printf("%d\n", (50 <= x && x <= 70 ? x : 100));
    }

    return 0;
}
