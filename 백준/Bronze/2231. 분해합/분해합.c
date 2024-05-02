#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void) {

	int n, i, j, sum , flag = 0;
	scanf("%d", &n); 

	for (i = 1; i < n; i++) {
		j = i;
		sum = 0;
		while (j > 0) {
			sum += (j % 10);
			j /= 10;
		}
		if ((i + sum) == n) {
			flag = 1;
			break;
		}
	}

	if (flag == 1)
		printf("%d\n", i);
	else
		printf("0\n");

	return 0;
}