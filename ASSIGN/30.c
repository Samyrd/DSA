
/*
//1.

#include <stdio.h>

int main() {
    int arr[5];
    int i,temp,j;

    printf("Enter elements in an array:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<5;i++){
    	for(j=0;j<4-i;j++){
    		if(arr[j]>arr[j+1]){
    			temp=arr[j];
    			arr[j]=arr[j+1];
    			arr[j+1]=temp;
			}
		}
	}
	printf("Array after sorting");
	for(i=0;i<5;i++){
		printf("%d",arr[i]);
	}
    
    printf("\n");
    return 0;
}


//2.

#include<stdio.h>
int main(){
	int i,j,arr[5],temp;
	printf("Enter elements in an array");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		for(j=0;j<4-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("Second largest element of the array is %d",arr[3]);
	
	
	return 0;
}



//3. 

#include<stdio.h>
int main(){
	int i,j,arr[5],temp;
	printf("Enter elements in a array:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<4-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	printf("The second smallest number in the array is %d",arr[1]);
	return 0;
}

*/

//4.
#include<stdio.h>
int main(){
	int i,j,arr[5],temp;
	printf("Enter elements in the array:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<4-i;j++){
			if(arr[j]>arr[j+1]){   //if(arr[j]<arr[j+1]...it will print in descending order. No need to run the loop for i=4 to i=0
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	printf("Arrray sorted in descending order:");
	for(i=4;i>=0;i--){
		printf("%d ",arr[i]);
	}
//	
//	for(i=0;i<=4;i++){
//		printf("%d",arr[i]);
//	}
	
	return 0;
}


/*
//5.
#include<stdio.h>
int main(){
	int i,arr1[5],arr2[5];
	printf("Enter elements in the array:");
	for(i=0;i<5;i++){
		scanf("%d",&arr1[i]);
	}
	
	for(i=0;i<5;i++){
		arr2[i]=arr1[i];
	}
	
	printf("Array copied is :");
	for(i=0;i<5;i++){
		printf("%d ",arr2[i]);
	}
	
	printf("\nArray copied in reverse order :");
	for(i=4;i>=0;i--){
		printf("%d ",arr2[i]);
	}
	printf("\n");
	
	return 0;
}


//Two comapre two arrays:
#include <stdio.h>

int main() {
    int arr1[5], arr2[5];
    int i, flag = 1;

    printf("Enter elements of first array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of second array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }

    // Compare arrays
    for (i = 0; i < 5; i++) {
        if (arr1[i] != arr2[i]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Both arrays are equal");
    else
        printf("Arrays are not equal");

    return 0;
}

*/



// Iterate JavaScript Program to print alternate elements
// of the array

function getAlternates(arr) {
    let res = [];
    
    // Iterate over all alternate elements
    for (let i = 0; i < arr.length; i += 2) {
        res.push(arr[i]);
    }
    return res;
}


// Driver Code
const arr = [10, 20, 30, 40, 50];
const res = getAlternates(arr);
console.log(res.join(" "));


#include <bits/stdc++.h>
using namespace std;

// function to calculate the minimum cost
int cost(vector<int>& a)
{
    // Minimum cost is (size - 1) multiplied with minimum element.
    int n = a.size();
    return (n - 1) * (*min_element(a.begin(), a.end()));
}

int main()
{
    vector<int> a = { 4, 3, 2 };
    cout << cost(a) << endl;
    return 0;
}


#include <stdio.h>

// Function to rotate array left by one position
void leftRotateByOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

// Function to rotate array left by d positions
void leftRotate(int arr[], int d, int n)
{
    for (int i = 0; i < d; i++) {
        leftRotateByOne(arr, n);
    }
}

// Function to print an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    // Rotate array left by d positions
    leftRotate(arr, d, n);

    printf("Array  after rotated by %d positions is: ", d);
    printArray(arr, n);

    return 0;
}



// C program to rotate an array by
// d elements
#include <stdio.h>

/* function to print an array */
void printArray(int arr[], int size);

/*Function to get gcd of a and b*/
int gcd(int a, int b);

/*Function to left rotate arr[] of size n by d*/
void leftRotate(int arr[], int d, int n)
{
    int i, j, k, temp;
    /* To handle if d >= n */
    d = d % n;
    int g_c_d = gcd(d, n);
    for (i = 0; i < g_c_d; i++) {
        /* move i-th values of blocks */
        temp = arr[i];
        j = i;
        while (1) {
            k = j + d;
            if (k >= n)
                k = k - n;
            if (k == i)
                break;
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}

/*UTILITY FUNCTIONS*/
/* function to print an array */
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

/*Function to get gcd of a and b*/
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

/* Driver program to test above functions */
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    leftRotate(arr, 2, 7);
    printArray(arr, 7);
    getchar();
    return 0;
}





class RabinKarpHash {
private:
    const int mod = 1e9 + 7;
    const int base = 31;
    vector<int> hash;
    vector<int> power;

    // modular addition
    int add(int a, int b) {
        a += b;
        if (a >= mod) a -= mod;
        return a;
    }

    // modular subtraction
    int sub(int a, int b) {
        a -= b;
        if (a < 0) a += mod;
        return a;
    }

    // modular multiplication
    int mul(int a, int b) {
        return (int)((1LL * a * b) % mod);
    }

    // convert character to int 
    // ('a' = 1, ..., 'z' = 26)
    int charToInt(char c) {
        return c - 'a' + 1;
    }

public:
    // constructor: precomputes prefix hashes and powers
    RabinKarpHash(string &s) {
        int n = s.size();
        hash.resize(n);
        power.resize(n);

        hash[0] = charToInt(s[0]);
        power[0] = 1;

        for (int i = 1; i < n; ++i) {
            hash[i] = add(mul(hash[i - 1], base), charToInt(s[i]));
            power[i] = mul(power[i - 1], base);
        }
    }

    // get hash of substring s[l...r] in O(1)
    int getSubHash(int l, int r) {
        int h = hash[r];
        if (l > 0) {
            h = sub(h, mul(hash[l - 1], power[r - l + 1]));
        }
        return h;
    }
};
