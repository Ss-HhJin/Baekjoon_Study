#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int arr[9];
	int max, i, maxIdx = 0;

	for (i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	for (i = 0; i < 9; i++) {
		if (max < arr[i]) {
			max = arr[i];
			maxIdx = i;
		}
	}
	printf("%d %d", max, maxIdx + 1);
	return 0;
}