#include <stdio.h>

int main (void){
	int arr[10] = {4, 2, 42, 1,2 ,535,3,5,22,56};
	int i, j, ind_min;
	for(i=0; i<9; i++){
		ind_min = i+1;
		for(j=i+2; j<10; j++){
			if(arr[j]<arr[ind_min]){
				ind_min = j;
			}
		}
		if(arr[ind_min] < arr[i]){
			int temp= arr[i];
			arr[i] = arr[ind_min];
			arr[ind_min] = temp;
		}
	}

	for (int i=0; i<10; i++){
		printf("%d, ", arr[i]);
	}
	return 0;
}