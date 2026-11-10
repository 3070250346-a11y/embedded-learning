#include <stdio.h>

void bubble(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - 1 - i; j++)
			if (a[j] > a[j + 1]){
				int t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
			}
}

int bsearch_i(int a[], int n, int key)
{
	int lo = 0, hi = n - 1;
	while (lo <= hi){
		int mid = lo + (hi - lo)/2;
		if (a[mid] == key) return mid;
		if (a[mid] < key) lo = mid + 1;
		else              hi = mid - 1;
	}
	return -1;
}

int main(void)
{
	int a[8] = {42, 7, 19, 3, 88, 15, 60, 27};

	bubble(a, 8);
	for (int i = 0; i < 8; i++) printf("%d ", a[i]);
	printf("\n");

	printf("找 19 -> 下标 %d\n", bsearch_i(a, 8, 19));
	printf("找 50 -> 下标 %d\n", bsearch_i(a, 8, 50));
	return 0;
}
