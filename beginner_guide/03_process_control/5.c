#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    if (n <= 9) {
        printf("%d\n", n * 100);
    } else if (n <= 29) {
        printf("%d\n", n * 90);
    } else if (n <= 99) {
        printf("%d\n", n * 80);
    } else {
        printf("%d\n", n * 70);
    }

    return 0;
}
