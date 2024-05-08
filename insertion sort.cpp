#include <stdio.h>

int main()
{
	int a[5] = { 14,6,5,31,27 };
	int imsi, cnt;

	for (int i = 1; i < 5; i++) {
		imsi = a[i];
		cnt = i - 1;
		while (cnt >= 0 && imsi < a[cnt]) {
			a[cnt + 1] = a[cnt];
			cnt = cnt - 1;
		}
		a[cnt + 1] = imsi;
	}
	for (int j = 0; j <= 4; j++) {
		printf("%d \n", a[j]);
	}
}