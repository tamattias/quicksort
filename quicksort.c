#include "quicksort.h"

static int partition(int *arr, int p, int r)
{
	int i, j;
	int tmp;
	int pivot;

	pivot = arr[r];

	for (i = -1, j = 0; j < r; ++j) {
		if (arr[j] <= pivot) {
			tmp = arr[j];
			arr[j] = arr[++i];
			arr[i] = tmp;
		}
	}

	arr[r] = arr[i + 1];
	arr[i + 1] = pivot;

	return i + 1;
}

void quicksort(int *arr, int p, int r)
{
	int pivot;

	if (p < r) {
		pivot = partition(arr, p, r);
		quicksort(arr, p, pivot - 1);
		quicksort(arr, pivot + 1, r);
	}
}

