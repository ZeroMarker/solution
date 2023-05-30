#include <stdio.h>

int bubble(int a[], int len) {
    for(int i = 0; i < len; i++) {
        for(int j = 0; j < len; j++) {
            if(a[j] > a[j + 1]) {
                a[i] = a[i] + a[j] - (a[j] = a[i]);
            }
        }
    }

}
int print()
int main(void) {
    int a = {5, 2, 6, 4, 6, 9}
    int len = sizeof(a) / sizeof(a[0]);
    bubble(a, len);

    return 0;
}