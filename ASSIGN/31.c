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


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int start = 0;
    int end = n - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "Reverse Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


#include <stdio.h>
void sortArray(int arr[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[5];
    int i;

    printf("Enter elements in the array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    sortArray(arr, 5);

    printf("Array after sorting:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

