#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>//atoi
#include <string.h>
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
    char arr[11] = "";
    int i, rslt, * arr2, len;
    scanf("%s", arr);
    rslt = atoi(arr);
    len = (int)strlen(arr);
    arr2 = (int*)malloc(sizeof(int) * len);
    i = 0;
    while (rslt > 0) {
        arr2[i] = rslt % 10;
        rslt /= 10;
        i++;
    }
    quickSort(arr2, 0, len - 1);
    for (i = 0; i < len; i++) {
        printf("%d", arr2[i]);
    }
    free(arr2);
    return 0;
}