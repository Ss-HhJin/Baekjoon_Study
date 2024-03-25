#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int arr[1000000] = { 0 };
int main(void) {
	int n, i, min, max;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	min = arr[0];
	max = arr[0];
	for (i = 0; i < n; i++) {
		if (min > arr[i])
			min = arr[i];
		if (max < arr[i])
			max = arr[i];
	}
	printf("%d %d", min, max);
	return 0;
}