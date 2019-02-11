#include <stdio.h>
#define max  6

void merg(int a[], int low, int mid, int high) {

	int b[1000];
	int i = low, j = mid+1;
	int k = 0;

	//ºñ±³
	while (i<=mid && j <= high)
	{
		if (a[i] <= a[j])
		{
			b[k] = a[i];
			k++;
			i++;
		}
		else
		{
			b[k] = a[j];
			k++;
			j++;
		}
	}

	while (i <= mid)
	{
		b[k] = a[i];
		k++;
		i++;
	}
	
	while (j <= high)
	{
		b[k] = a[j];
		j++;
		k++;
	}
	k--;

	while (k >= 0)
	{
		a[low + k] = b[k];
		k--;
	}
}

void mergesort(int a[], int low, int high) {


	//exit condition

	if (low < high)
	{	
		int m = (low + high) / 2;
		
		//left
		mergesort(a, low, m);

		//right
		mergesort(a, m+1, high);

		merg(a, low, m, high);
		
	}
	else
	{
		return;
	}
}

int main() {

	int a[max] = {20,10,70,80,40,90};

	mergesort(a, 0, max - 1);

	for (int i = 0; i < max; i++)
	{
		printf("%d ", a[i]);
	}
}