#include <stdio.h>

int main()
{
	int a[5] = { 14,6,5,31,27 };
	int i, j, temp, l;

	for (int i = 0; i < 4; i++) {
		l = 3 - i;
		for (j = 0; j <= l; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	for (int k = 0; k < 5; k++)
		printf("%d ", a[k]);
}