#include <stdio.h>

int main()
{
	int a[5] = { 14,6,5,31,27 };
	int i, j, temp, l;

	for (i = 0; i < 4; i++) {
		l = i + 1;
		for (j = l; j < 5; j++) {
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for (int k = 0; k < 5; k++)
		printf("%d ", a[k]);
}