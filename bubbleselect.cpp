#include <iostream>
#include "bubbbleselect.h"

using namespace std;

void bubbleSort(int arr[], int n){
  int i, j, tmp;
  for (i = 0; i < n; i++){
    for (j = 0; j < n - i - 1; j++){
      if (arr[j] > arr[j + 1]){
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
}

void selectionSort(int arr[], int n){

	int minValue, index;

	for(int k = 0; k < n; k++){

		minValue = arr[k];

		for(int i = k; i < n; i++){

		if(arr[i]<minValue)
			minValue = arr[i];
		}

		for(int i = 0; i < n; i++){

			if(arr[i] == minValue){
				index = i;
				break;
			}
		}

		int temp = arr[k];
		arr[k] = arr[index];
		arr[index] = temp;

		for(int i = 0; i < n; i++){

			if(i != n-1)
			printf("%d - ", arr[i]);
			else
			printf("%d", arr[i]);
		}

	printf("\n");
	}
}
