#include<stdio.h>
int max_element(int arr[], int size){
	int max,i;
	max=arr[0];
	for(i=1;i<size;i++){
		if(max<arr[i])
			max=arr[i];
	}
	return max;
}

#include<stdio.h>
int min_element(int arr[], int size){
	int min,i;
	min=arr[0];
	for(i=1;i<size;i++){
		if(arr[i]<min)
			min=arr[i];
	}
	return max;
}
