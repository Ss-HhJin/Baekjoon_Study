#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
int tempSum = 0;
void pick(int n, int m, int* nArr, int picked[], int toPick, int start, int sum) {
    int i;
    if (toPick == 0) {
        for (i = 0; i < 3; i++) {
            sum += picked[i];
            //printf("%d ", picked[i]);
        }
        if (sum <= m & tempSum < sum)
            tempSum = sum;

        //printf("\n sum  = %d \n", sum);
        return;
    }

    for (i = start; i < n; i++) {
        picked[3 - toPick] = nArr[i];
        pick(n, m, nArr, picked, toPick - 1, i + 1, sum);
    }
}
int main(void) {
    int n, m, i;
    int* nArr;
    int picked[3] = { 0 };
    int sum = 0;

    scanf("%d %d", &n, &m);
    nArr = (int*)malloc(sizeof(int) * n);

    for (i = 0; i < n; i++) {
        scanf("%d", &nArr[i]);
    }

    pick(n, m, nArr, picked, 3, 0, sum);
    printf("%d ", tempSum);
    free(nArr);

    return 0;
}
