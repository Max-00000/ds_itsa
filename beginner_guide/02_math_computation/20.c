#include <stdio.h>

int main() {

    int spf[1001]; spf[0] = spf[1] = -1;
    for (int i = 2; i <= 1000; ++i) spf[i] = i;
    for (int i = 2; i * i <= 1000; ++i) {
        if (spf[i] == i) {
            for (int j = i * i; j <= 1000; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }

    int n;
    scanf("%d", &n);
    for (int i = n - 1; i >= 2; --i) {
        if (spf[i] == i) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
