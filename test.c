#include "quicksort.h"

#include <stdio.h>

int main(int argc, char *argv[])
{
	int arr[] = {5, 6, 7, 8, 100, 30, 20, 10,2, 1, 100};
	int n = sizeof(arr)/sizeof(int);
	int i;

	quicksort(arr, 0, n-1);

	for (i = 0; i < n; ++i)
		printf("%d\n", arr[i]);

	return 0;
}
