#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int partition(int* A, int p, int r) {
    int i, j;
    int t;

    i = p - 1;

    for (j = p; j < r; j++) {
        if (A[j] > A[r]) {
            i++;
            //A[i] <-> A[j]
            t = A[i];
            A[i] = A[j];
            A[j] = t;
        }
    }

    i++;
    t = A[i];
    A[i] = A[r];
    A[r] = t;
    return i;
}
void quickSort(int* A, int p, int r) {
    if (p < r) {
        int q = partition(A, p, r);
        quickSort(A, p, q - 1);
        quickSort(A, q + 1, r);
    }
}
int main(void) {
	int n, k, * arr, i;
	scanf("%d %d", &n, &k);
	arr = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
    quickSort(arr, 0, n - 1);
    printf("%d", arr[k - 1]);
	free(arr);
	return 0;
}