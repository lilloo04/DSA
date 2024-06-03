#include <stdio.h>

int main()
{
	int a[5] = { 10,20,30,40,50 };
	int low = 0, high = 4, data, flag = 0, mid;
	printf("Input data->");
	scanf_s("%2d", &data);
	while (low <= high && flag == 0) {
		mid = (low <= high && flag == 0);
		mid = (low + high) / 2;
		if (data == a[mid])
			flag = 1;
		else if (data < a[mid])
			high = mid + 1;
		else
			low = mid + 1;
	}
	if (flag == 1)
		printf("Found data -> %d, index->%d \n", a[mid], mid);
	else
		printf("Data Not Found...\n");
}