#include <stdio.h>

int is_prime(int n) {  // n >= 2
    if (n%2 == 0) return 0;
    for (int i = 3; i * i <= n; i += 2) {
        if (n%i == 0) return 0;
    }
    return 1;
}

int main() {

    int n;
    scanf("%d", &n);
    printf("%s\n", (is_prime(n) ? "YES" : "NO"));

    return 0;
}
