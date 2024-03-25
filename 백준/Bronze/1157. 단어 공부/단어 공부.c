#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int countNum[26] = { 0 };
	char word[1000001];
	int i, index = 0 , max, flag = 0;
	scanf("%s", word);
	for (i = 0; word[i] != '\0'; i++) {
		if (word[i] >= 'a')
			word[i] = word[i] - 32;
		index = word[i] - 'A';
		countNum[index]++;
	}
	max = countNum[0]; index = 0;
	for (i = 0; i < 26; i++) {
		if (max < countNum[i]) {
			max = countNum[i];
			index = i;
		}
	}
	for (i = 0; i < 26; i++) {
		if (index == i)
			continue;
		if (max == countNum[i]) {
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		printf("?");
	else
		printf("%c", index + 'A');

	return 0;
}