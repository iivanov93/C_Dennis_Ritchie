#include <stdio.h>

int binsearch (int x, int v[], int n);

int main(void) {
	int arr[] = {1, 14, 22, 30, 41, 56, 69, 112, 135};
 	printf("Find %d at position: %d\n", arr[binsearch( 30, arr, 10)], binsearch( 30, arr ,10 ));

	return 0;
}

int binsearch (int x, int v[], int n) {
	int low, high, mid;
    
	low = 0;
	high = n - 1;
    
	mid = ( low + high ) / 2;

	while (low < high && x != v[mid])  {
        	if ( x > v[mid] )
            		low = mid + 1;
        	else
            		high = mid - 1;

	mid = ( low + high ) / 2;
	}

	if ( x == v[mid] )
        	return mid;
	else
        	return -1;
}
