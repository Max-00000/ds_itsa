#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    while (n--) {
        int m;
        scanf("%d", &m);
        if (m > 31) {
            printf("Value of more than 31\n");
        } else {
            printf("%d\n", (1 << m));
        }
    }

    return 0;
}
