#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    printf("%d days\n", n/86400);
    printf("%d hours\n", n%86400/3600);
    printf("%d minutes\n", n%86400%3600/60);
    printf("%d seconds\n", n%86400%3600%60);

    return 0;
}
