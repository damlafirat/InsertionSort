#include<stdio.h>
#include<stdlib.h>

void insertionSort(int arr[], int n){
	
	int value, index;
	
	for(int k = 0; k < n; k++){
		
		value = arr[k];
		
		for(int i = 0; i < k; i++){
			
			if(arr[i] < value)
			continue;
			
			else{
				for(int j = k; j > i; j--){
					arr[j] = arr[j-1];
				}
				arr[i] = value;
				break;
			}				
		}
		
		for(int i = 0; i < n; i++){
			
			if(i != n-1)
			printf("%d - ", arr[i]);
			else
			printf("%d", arr[i]);
		}
	
	printf("\n");
	}
}

int main(){
	
	int arr[] = {12, 11, 13, 5, 6};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	insertionSort(arr, size);
	
	system("pause");
	return 0;
}

