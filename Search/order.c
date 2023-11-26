#include <stdio.h>

int order(int a[], int len, int key) {
	int i;
	for(i = 0; i < len; i++) {
		if (a[i] == key) {
			return i + 1;
		}
	}
	printf("Failed to search!");
}
int main(void) {
	int a[] = {1, 3, 4, 6, 7, 9};
	int len = sizeof(a)/sizeof(a[0]);
	int key = 7;
	int loc = order(a, len, key);
	printf("%d\t%d", loc, a[loc-1]);
	return 0;
}
