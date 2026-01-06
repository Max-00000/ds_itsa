#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    if (3 <= n && n <= 5) {
        printf("Spring\n");
    } else if (6 <= n && n <= 8) {
        printf("Summer\n");
    } else if (9 <= n && n <= 11) {
        printf("Autumn\n");
    } else if (n == 12 || n == 1 || n == 2) {
        printf("Winter\n");
    }

    return 0;
}
