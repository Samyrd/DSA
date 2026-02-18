
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

// C++ program to count total anagram
// substring of a string
#include <bits/stdc++.h>
using namespace std;

// Total number of lowercase characters
#define MAX_CHAR 26

// Utility method to return integer index
// of character 'c'
int toNum(char c)
{
    return (c - 'a');
}

// Returns count of total number of anagram
// substrings of string str
int countOfAnagramSubstring(string str)
{
    int N = str.length();

    // To store counts of substrings with given
    // set of frequencies.
    map<vector<int>, int> mp;

    // loop for starting index of substring
    for (int i=0; i<N; i++)
    {
        vector<int> freq(MAX_CHAR, 0);

        // loop for length of substring
        for (int j=i; j<N; j++)
        {
            // update freq array of current
            // substring
            freq[toNum(str[j])]++;

            // increase count corresponding
            // to this freq array
            mp[freq]++;
        }
    }

    // loop over all different freq array and
    // aggregate substring count
    int result 

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

#include <bits/stdc++.h>
using namespace std;

int isValid(string &s){

    int n = s.size();

    if (n < 7)
        return false;
        
    // Using string stream to separate all
    // the string from '.' and push back
    // into vector like for ex -
    vector<string> v;
    stringstream ss(s);
    while (ss.good()){
        string substr;
        getline(ss, substr, '.');
        v.push_back(substr);
    }

    if (v.size() != 4)
        return false;
        
    // Iterating over the generated vector of strings
    for (int i = 0; i < v.size(); i++){
        
        string temp = v[i];

        if (temp.size() > 1){
            if (temp[0] == '0')
                return false;
        }

        for (int j = 0; j < temp.size(); j++){
            if (isalpha(temp[j]))
                return false;
        }
        
        // And lastly we are checking if the 
        // number is greater than 255 or not
        if (stoi(temp) > 255)
            return false;
    }
    return true;
}

int main(){
    string s = "128.0.0.1";
    isValid(s) ? cout << "true" : cout << "false";
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

#include <bits/stdc++.h>
using namespace std;

// Function to recursively remove adjacent duplicates
string rremove(string s) {
    // Create an empty string to build the result
    string sb = ""; 

    // Get the size of the input string
    int n = s.size(); 

    // Iterate over the length of current string
    for (int i = 0; i < n; i++) {
        bool repeated = false;

        // Check if the current characteris the same
        // as the next one
        while (i + 1 < n && s[i] == s[i + 1]) {
            repeated = true;  // Mark as repeated
          
            // Skip the next character
            // since it's a duplicate
            i++;  
        }

        // If the character was not repeated,
        // add it to the result string
        if (!repeated) sb += s[i];
    }

    // If no changes made, return the result string
    if (n == sb.length())
        return sb;
    
    // Otherwise, recursively call the function 
    // to check for more duplicates
    return rremove(sb);
}

int main() {
    string s = "geeksforgeek";  
    string result = rremove(s);  
    cout << result << endl;
    
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

bool areIsomorphic(string s1, string s2) {

    int n = s1.length();

    // Check every character of s1
    for (int i = 0; i < n; i++) {
        char c1 = s1[i];
        char c2 = s2[i];

        // Check all occurrences of c1 in s1
        // and corresponding occurrences of c2 in s2
        for (int j = 0; j < n; j++) {
            
            // If we find another occurrence of c1 in s1,
            // it must match the corresponding character in s2
            if (s1[j] == c1 && s2[j] != c2) {
                return false;
            }

            // If we find another occurrence of c2 in s2,
            // it must match the corresponding character in s1
            if (s2[j] == c2 && s1[j] != c1) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    
    string s1 = "aab";
    string s2 = "xxy";

    if(areIsomorphic(s1, s2)) {
        cout << "true\n";
    }
    else {
        cout << "false\n";
    }

    return 0;
}




#include <iostream>
using namespace std;

bool areRotations(string &s1, string &s2) {
    int n = s1.size();
  	
  	// generate and check all possible rotations of s1
    for (int i = 0; i < n; ++i) {
      
      	// if current rotation is equal to s2 return true
        if (s1 == s2)
            return true;
      
      	// right rotate s1
        char last = s1.back();
        s1.pop_back();
        s1 = last + s1;
    }
    return false;
}

int main() {
    string s1 = "aab";
    string s2 = "aba";

    cout << (areRotations(s1, s2) ? "true" : "false");
    return 0;
}
