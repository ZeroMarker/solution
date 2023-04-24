
// linear list insert && delete
#include<stdio.h>
#define MAX 100

int insert(int a[],int e, int loc, int n){
	int i;
	int temp;
	for(i = loc - 1; i <= n; i++) {
		temp = a[i];
		a[i] = e;
		e = temp; 
	} 
} 
int del(int a[], int loc, int n) {
	int i;
	for(i = loc - 1; i < n - 1; i++) {
		a[i] = a[i+1]; 
	} 
}
int main(void) {
	int a[MAX];
	int i;
	int n = 9;
	for(i = 0; i < n; i++) {
		a[i] = i + 1;	
	}
	int e = 4;
	int loc = 3;
	insert(a, e, loc, n);
	for(i = 0; i <= n; i++) {
		printf("%d\t", a[i]);
	}
	printf("\n");
	del(a, loc+1, n);
	for(i = 0; i <= n; i++) {
		printf("%d\t", a[i]);
	}
	return 0;
} 

// merge linear list
#include<stdio.h>

void merge(int a[], int La, int b[], int Lb, int c[]) {
	int i = 0, j = 0;
	int k = 0;
	while(i <= La && j <= Lb) {
		if(a[i] < b[j]) {
			c[k++] = a[i++];
		}
		else {
			c[k++] = b[j++];
		}
	} 
}
int main(void) {
	int a[] = {1, 3, 5, 7}, b[] = {2, 4, 6, 8};
	int La = sizeof(a) / sizeof(a[0]);
	int Lb = sizeof(b) / sizeof(b[0]);
	int i;
	int c[La + Lb];
	merge(a, La, b, Lb, c);
	for(i = 0; i < La + Lb; i++) {
		printf("%d\t", c[i]);
	}
	return 0;
} 


// linear list reverse
#include<stdio.h>

void trans(int a[], int len) {
	int i, temp;
	for(i = 0; i < len/2; i++) {
		temp = a[i];
		a[i] = a[len-1-i];
		a[len-1-i] = temp;
	}
}
int main(void) {
	int a[] = {1, 3, 5, 6, 2, 7};
	int len = sizeof(a) / sizeof(a[0]);
	trans(a, len);
	int i;
	for(i = 0; i < len; i++) {
		printf("%d\t",a[i]);
	}
	return 0;
} 

// linear list substring
#include<stdio.h>
#include<string.h>
#define MAX 100
#define ERROR 0 

char* substr(char *a, char *b, int m, int n){
	if(m > strlen(a) || (m + n) > strlen(a) || m < 0 || n < 0) {
		return ERROR;
	}
	int j = 0;
	int i;
	for(i = m - 1; i < (m + n); i++){
		b[j] = a[i];
		j++;
	}
}
int main(void) {
	char a[MAX] = "Hello, C Language world!";
	char b[MAX];
	int m = 4, n = 3, i = 1;
	substr(&a[0], &b[0], m, n);
	printf("%s", b);
	return 0;
}


// matrix column transposition

#include<stdio.h>
#define number 10

typedef struct {
    int i, j;
    int data;
}triple;

typedef struct {
    triple data[10];
    int n, m, num;
}TransMatrix;

TransMatrix transposeMatrix(TransMatrix M, TransMatrix T) {
    T.m = M.n;
    T.n = M.m;
    T.num = M.num;

    if (T.num) {
        int q = 0;
        int col;
        for (col = 1; col <= M.m; col++) {
        	int p;
            for (p = 0; p < M.num; p++) {
                if (M.data[p].j == col) {
                    T.data[q].i = M.data[p].j;
                    T.data[q].j = M.data[p].i;
                    T.data[q].data = M.data[p].data;
                    q++;
                }
            }
        }
    }
    return T;
}

int main() {
    TransMatrix M;
    M.m = 2;
    M.n = 3;
    M.num = 4;

    M.data[0].i = 1;
    M.data[0].j = 2;
    M.data[0].data = 1;

    M.data[1].i = 2;
    M.data[1].j = 2;
    M.data[1].data = 3;

    M.data[2].i = 3;
    M.data[2].j = 1;
    M.data[2].data = 6;

    M.data[3].i = 3;
    M.data[3].j = 2;
    M.data[3].data = 5;

    TransMatrix T;
    int k;
    for (k = 0; k < number; k++) {
        T.data[k].i = 0;
        T.data[k].j = 0;
        T.data[k].data = 0;
    }
    T = transposeMatrix(M, T);
    int i;
    for (i = 0; i < T.num; i++) {
        printf("(%d, %d, %d)\n", T.data[i].i, T.data[i].j, T.data[i].data);
    }
    return 0;
}

