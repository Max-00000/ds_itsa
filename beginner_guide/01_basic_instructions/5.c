#include <stdio.h>

int main() {

    char num[5];
    scanf("%s", num);
    for (int i = 0; i < 5; ++i) {
        int cur = num[i] - '0';
        for (int j = 0; j < cur; ++j) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
