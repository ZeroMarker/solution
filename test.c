#include <stdio.h>

int main(void) {
    int a = 1, b = 3;
    a = a + b - (b = a);
    printf("a = %d, b = %d", a, b);
    return 0;
}