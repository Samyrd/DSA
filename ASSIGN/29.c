//Assignment 29
/*
1. 
#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;
    int i;

    printf("Enter elements in an array:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) {
        sum = sum + arr[i];
    }

    printf("Sum of the elements of an array is: %d", sum);

    return 0;
}


//2.
#include<stdio.h>
int main(){
	int arr[10];
	int sum=0;
	int i,avg;
	
	printf("Enter the elements \n");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++){
		sum=sum+arr[i];
	}
	avg=sum/10;
	printf("The average of numbers is %d",avg);
}




//3.
#include<stdio.h>
int main(){
	int i,SumEven=0, SumOdd=0;
	int arr[10];
	printf("Enter elements");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++){
		if(arr[i]%2==0){
			SumEven=SumEven+arr[i];
		}
		else{
			SumOdd=SumOdd+arr[i];
		}
	}
	printf("The sum of Even Number is %d",SumEven);
	printf("The sum of Odd Number is %d",SumOdd);
	
	return 0;
}



//4.
#include<stdio.h>
int main(){
	int i,arr[10];
	int Max;
	printf("Enter the elements of the array");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	Max=arr[0];
	for(i=1;i<10;i++){
		if(arr[i]>Max){
			Max=arr[i];
		}
	}
	printf("The maximum element of the array is: %d",Max);
	
	
	return 0;
}



#include<stdio.h>
int main(){
	int i, arr[5];
	int Min;
	printf("Enter the elements of the array");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	Min=arr[0];
	for(i=1;i<5;i++){
		if(arr[i]<Min){
			Min=arr[i];
		}
	}
	printf("The minimum element of the array is : %d",Min);
	
	return 0;
}

*/
// C++ program to check if a string is substring of other
// using nested loops

#include <iostream>
using namespace std;

// Function to find if pat is a substring of txt
int findSubstring(string &txt, string &pat) {
    int n = txt.length();
    int m = pat.length();

    // Iterate through txt
    for (int i = 0; i <= n - m; i++) {

        // Check for substring match
        int j;
        for (j = 0; j < m; j++) {

            // Mismatch found
            if (txt[i + j] != pat[j]) {
                break;
            }
        }

        // If we completed the inner loop, we found a match
        if (j == m) {

            // Return starting index
            return i;
        }
    }
    
    // No match found
    return -1;
}

int main() {
    string txt = "geeksforgeeks";
    string pat = "eks";
    cout << findSubstring(txt, pat);

    return 0;
}

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

///
function checkEqual(a, b) {
    const n = a.length, m = b.length;
    if (n !== m)
        return false;

    const mp = {};
    for (let num of a) {
        mp[num] = (mp[num] || 0) + 1;
    }

    for (let num of b) {
        if (!(num in mp) || mp[num] === 0)
            return false;
        mp[num]--;
    }
    return true;
}
const a = [3, 5, 2, 5, 2];
const b = [2, 3, 5, 5, 2];

console.log(checkEqual(a, b) ? 'true' : 'false');


#include <bits/stdc++.h>
using namespace std;

char nonRep(string &s) {
    int n = s.length();
    for (int i = 0; i < n; ++i) {
        bool found = false;

        for (int j = 0; j < n; ++j) {
            if (i != j && s[i] == s[j]) {
                found = true;
                break;
            }
        }
        if (!found) 
            return s[i];
    }

    return '$';
}

int main() {
    string s = "Racecar";
    cout << nonRep(s);
    return 0;
}



#include <iostream>
#include <string>
#include <vector>
using namespace std;

string multiplyStrings(string s1, string s2) {
    int n1 = s1.size(), n2 = s2.size();
    if (n1 == 0 || n2 == 0)
        return "0";

    // check if string are negative
    int nn = 1, mm = 1;
    if (s1[0] == '-')
        nn = -1;
    if (s2[0] == '-')
        mm = -1;

    int isNeg = nn * mm;

    // will keep the result number in 
    // vector in reverse order
    vector<int> result(n1 + n2, 0);

    // index by s1
    int i1 = 0; 

    // index by s2
    int i2 = 0; 

    // go from right to left by s1
    for (int i = n1 - 1; i >= 0; i--) {
        if (s1[i] == '-')
            continue;
        int carry = 0;
        int n1 = s1[i] - '0';
        i2 = 0;

        // go from right to left by s2
        for (int j = n2 - 1; j >= 0; j--) {
            if (s2[j] == '-')
                continue;
            int n2 = s2[j] - '0';
            
            // multiply and add this result 
            // to the existing result
            int sum = n1 * n2 + result[i1 + i2] + carry;

            // carry for next iteration
            carry = sum / 10;

            // store result
            result[i1 + i2] = sum % 10;

            i2++;
        }

        // store carry in next cell
        if (carry > 0)
            result[i1 + i2] += carry;

        i1++;
    }

    // ignore '0's from the right
    int i = result.size() - 1;
    while (i >= 0 && result[i] == 0)
        i--;

    // if all were '0's - means either 
    // both or one of s1 or s2 were '0'
    if (i == -1)
        return "0";

    // generate the result string
    string s = "";

    while (i >= 0)
    s += to_string(result[i--]);

    // if negative
    if (isNeg == -1)
        s = "-" + s;

    return s;
}

int main() {
    string s1 = "0033", s2 = "2";
    cout << multiplyStrings(s1, s2);
    return 0;
}
