#include "main.h"

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = a, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
