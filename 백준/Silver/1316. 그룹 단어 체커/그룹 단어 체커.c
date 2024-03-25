#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int num, i, j, k, count = 0, flag;
	char word[101];
	scanf("%d", &num);
	for (i = 1; i <= num; i++) {
		scanf("%s", word);
		flag = 0;
		for (j = 0; word[j] != '\0'; j++) {
			char check = word[j];
			for (k = j+1; word[k] != '\0'; k++) {
				if (check == word[k]) {
					if (j - k == -1)
						flag = 0;
					else 
						flag = 1;
					break;
				}
			}
			if (flag == 1)
				break;
		}
		if (flag == 0)
			count++;
	}
	printf("%d", count);
	return 0;
}