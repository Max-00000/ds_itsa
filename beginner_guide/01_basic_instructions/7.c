#include <stdio.h>

int main() {

    int c;
    scanf("%d", &c);
    if (c == 1) {
        printf("    *\n");
        printf("   * *\n");
        printf("  *   *\n");
        printf(" *     *\n");
        printf("*********\n");
    } else if (c == 2) {
        printf("    *\n");
        printf("   ***\n");
        printf("  *****\n");
        printf(" *******\n");
        printf("*********\n");
    } else if (c == 3) {
        printf("*********\n");
        printf(" *******\n");
        printf("  *****\n");
        printf("   ***\n");
        printf("    *\n");
    }
    
    return 0;
}
