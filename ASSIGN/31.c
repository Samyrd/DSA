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




// C Program to right rotate the array by d positions

#include <stdio.h>
void rotateArr(int arr[], int n, int d) {
    
    for (int i = 0; i < d; i++) {
      
        int last = arr[n - 1];
        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;      
    }
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    rotateArr(arr, n, d);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 1, 2, 2, 2, 3, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int duplicateCount = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            duplicateCount++;
        }
    }

    cout << "Total number of duplicate elements: " << duplicateCount;
    return 0;
}



function checkEqual(a, b) {
    // If lengths of array are not equal means
    // array are not equal
    if (a.length !== b.length) return false;
    a.sort();
    b.sort();
    for (let i = 0; i < a.length; i++)
        if (a[i] !== b[i])
            return false;

    // If all elements were same.
    return true;
}
const a = [3, 5, 2, 5, 2];
const b = [2, 3, 5, 5, 2];
console.log(checkEqual(a, b) ? 'true' : 'false');
