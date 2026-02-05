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




#include <iostream>
#include <vector>

using namespace std;

void pushZerosToEnd(vector<int> &arr) {
    int n = arr.size();
    vector<int> temp(n);

    // to keep track of the index in temp[]
    int j = 0;

    // Copy non-zero elements to temp[]
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0)
            temp[j++] = arr[i];
    }

    // Fill remaining positions in temp[] with zeros
    while (j < n) {
        temp[j++] = 0;
    }

    // Copy all the elements from temp[] to arr[]
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}

int main() {
    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    pushZerosToEnd(arr);

    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}




#include <bits/stdc++.h>
using namespace std;

// A function to find a sorted sub-sequence of size 3
vector<int> find3Numbers(vector<int> &arr)
{
    int n = arr.size();

    // Fill smaller[] such that smaller[i] stores the
    // index of a smaller element on the left side
    vector<int> smaller(n, -1);
    int min = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= arr[min])
            min = i;
        else
            smaller[i] = min;
    }

    // Fill greater[] such that greater[i] stores the
    // index of a greater element on the right side
    vector<int> greater(n, -1);
    int max = n - 1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] >= arr[max])
            max = i;
        else
            greater[i] = max;
    }

    // Find the triplet
    for (int i = 0; i < n; i++)
    {
        if (smaller[i] != -1 && greater[i] != -1)
            return {arr[smaller[i]], arr[i], arr[greater[i]]};
    }

    // If no such triplet is found, return an empty vector
    return {};
}

// Driver code
int main()
{
    vector<int> arr = {12, 11, 10, 5, 6, 2, 30};
    vector<int> res = find3Numbers(arr);
    for (int x : result)
        cout << x << " ";
    return 0;
}
