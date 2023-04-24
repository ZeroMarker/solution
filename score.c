#include<stdio.h>
#include<string.h>

/*
input:
2
2 60
1 2
70 60
output:
Yes

input:
2
2 60
1 2
70 55
output:
No
*/
int main(void) {
    int T;  // loop times
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int n, X; // course number, standard score
        char result[5];
        scanf("%d%d", &n, &X);
        int a[n], b[n];
        int sum_ab = 0, sum_a = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }
        for (int i = 0; i < n; i++) {
            if (b[i] < 60) {
                strcpy(result, "No");
                continue;
            }
            sum_ab += a[i] * b[i];
            sum_a += a[i];
        }
        if (sum_ab / sum_a >= X) {
            strcpy(result, "Yes");
        } else {
            strcpy(result, "No");
        }
        for (int i = 0; i < n; i++) {
            if (b[i] < 60) {
                strcpy(result, "No");
                continue;
            }
        }
        printf("%s\n", result);
    }
    return 0;
}