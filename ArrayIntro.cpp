
//1. INITIALISATION OF ARRAY

//#include<iostream>
//using namespace std;
//
//int main(){
//	int arr[5]={1,3,4,5,7};   //First way of initialisation of array
//	int ar[]={1,2,4,5,8};	//Second way
//	int arry[4]={1,2,3}    //Third way of initialisation . The left out will contain  0 i.e [1 2 3 0]
//	int arryi[2]={1,2,5,6}  //gives error as too much initializers for int arri[2]
//	return 0;
//}

//2. INDEXING IN AN ARRAY
/* Note: Indexing : 0-Based indexing and 1-based indexing
					start=0 end=n-1  and start=1 end = n */


//3. SIZEOF() AND &(ADDRESS OF OPERATOR)
//Use of sizeof() operator and &(address of operator)

//#include<iostream>
//using namespace std;
//
//int main(){
//	int a=5;
//	int arr[10];
//	cout<<"Size of a: "<<sizeof(a)<<endl;
//	cout<<"Base address of arr is: "<<&arr<<endl; //Both way could be used to calculate the base address of array.
//	cout<<"Base address of arr is: "<<arr<<endl;
//	cout<<"Size of array arr is : "<<sizeof(arr)<<endl;
//	return 0;
//}



//4.TAKING INPUT AND PRINTING OUTPUT IN AN ARRAY

//#include<iostream>
//using namespace std;
//
//int main(){
//	int arr[10],i;
//	
//	//TAKING INPUT THROUGH LOOPING
//	cout<<"Enter the elements of an array: ";
//	for(i=0;i<10;i++){    
//		std::cin>> arr[i];
//	}
//	//PRINTING THE ELEMENTS OF AN ARRAY
//	cout<<"The elements of an array are: ";
//	for(i=0;i<10;i++){
//		std::cout<< arr[i]<<" ";
//	}
//	
//	return 0;
//}

/*5. Problem Statement: 1. 5 sized array based on Zero indexing
					  2. Take input in that array
					  3. Double each value of that array */
					  
//#include<iostream>
//using namespace std;
//
//int main(){
//	int array[5]; //Zero based indexing of size 5
//	int i;
//	
//	cout<<"Enter elements of an array: ";
//	for(i=0;i<5;i++){
//		cin>>array[i];
//	}
//	
//	cout<<endl<<"Elements of array  before doubling: ";
//	for(i=0;i<5;i++){
//		cout<<array[i]<<" ";
//	}
//	
//	cout<<endl<<"Elements of array after doubling: ";
//	for(i=0;i<5;i++){
//		array[i]=2*array[i];
//		cout<<array[i]<<" ";
//	}
//	
//	return 0;
//}



/*6. Problem Statement: 1. 5 sized array of zero based indexing
						2. Take input into the array.
						3. Print the total Sum of elements of an array. */
//#include<iostream>
//using namespace std;
//
//int main(){
//	int arr[5];
//	int i;
//	
//	cout<<"Enter elements of an array: ";
//	for(i=0;i<5;i++){
//		cin>>arr[i];
//	}
//	cout<<endl<<"The entered elements are: ";
//	for(i=0;i<5;i++){
//		cout<<arr[i]<<"\t";
//	}
//	
//	//finding the sum
//	int sum=0;
//	for(i=0;i<5;i++){
//		sum=sum+arr[i];
//	}
//	cout<<endl<<"The sum of elements is: "<<sum<<endl;
//	
//	return 0;
//}




//7. LINEAR SEARCH APPLICATION: CONSIDER A TARGET VARIABLE AND COMPARES EACH I.E BY BRUTE FORCE
//#include<iostream>
//using namespace std;
//
//int main(){
//	int arr[5],i,target;
//	bool flag=0;
//	cout<<"Enter the elements of array:"; //taking input in an array
//	for(i=0;i<5;i++){
//		cin>>arr[i];
//	}
//	//printing the elements in an array
//	cout<<endl<<"The entered elements are: ";
//	for(i=0;i<5;i++){
//		cout<<arr[i]<<"\t";
//	}
//	
//	//asking using to give target value to search in LINEAR SEARCH
//	cout<<endl<<"Enter element to search:";
//	cin>>target;
//	for(i=0;i<5;i++){
//		if(arr[i]==target){
//			flag=1;
//			break;
//		}
//	}
//	if(flag==1){
//		cout<<endl<<"Element found at position: "<<i<<endl;
//	}
//	else{
//		cout<<"Element not found";
//	}
//	
//	return 0;	
//}


//8.Problem Statement: Count no. of zeroes and Ones in an array
//
//#include<iostream>
//using namespace std;
//
//int main(){
//	int arr[5],i;
//	cout<<"Enter elements: ";
//	for(i=0;i<5;i++){
//		cin>>arr[i];
//	}
//	
//	//counting zeroes and ones
//	int ZeroCount=0, OneCount=0;
//	for(i=0;i<5;i++){
//		if(arr[i]==0){
//			ZeroCount++;
//		}
//		else if(arr[i]==1){
//			OneCount++;
//			
//		}
//	}
//	cout<<"The no. of Zeroes is : "<<ZeroCount<<endl;
//	cout<<"The no. of Ones is: "<<OneCount;
//	
//	return 0;
//}


//MINIMUM >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>MAXIMUM
//MINIMUM >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>MAXIMUM
//MINIMUM >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>MAXIMUM

//9. Problem Statement: To find  the minimum value in an array

//OWN: WITHOUT USING LIMITS.H
//#include<iostream>
//using namespace std;
//
//int main(){
//	int arr[5],i;
//	cout<<"Enter elements of an array: ";
//	for(i=0;i<5;i++){
//		cin>>arr[i];
//	}
//	cout<<endl<<"Elements are: ";
//	for(i=0;i<5;i++){
//		cout<<arr[i]<<"\t";
//	}
//	
//	//	finding minimum value in an array
//	cout<<endl<<"let's find minimum element."<<endl;
//	int MinNum=arr[0];
//	for(i=1;i<5;i++){
//		if(arr[i]<MinNum){
//			MinNum=arr[i];
//		}
//	}
//	cout<<"The minimum element is: "<<MinNum;
//	
//} 



///*@MINI_MUM VALUE  USING THE LIBRARY LIMITS.H ALONG WITH MIN(A,B) TOO...
//
//IN THE SAME WAY WE CAN FIND THE MAXIMUM ELEMENT OF AN ARRAY...
//JUST INITIALIZE MAX_NUM = INT_MIN
//										*/
//#include<iostream>
//#include<limits.h>
//using namespace std;
//
//int main(){
//	int arr[5],i;
//	cout<<"Enter elements of array: ";
//	for(i=0;i<5;i++){
//		cin>>arr[i];
//	}
//	cout<<endl;
//	int MinNum=INT_MAX;
//	//First approach: Using if condition and limits.h
////	for(i=0;i<5;i++){
////		if(arr[i]<MinNum){
////			MinNum=arr[i];
////		}
////	}
//
//	//Second Approach: Using min(a,b) directly with limits.h
//	for(i=0;i<5;i++){
//		MinNum=min(arr[i],MinNum);
//	}
//	
//	//Printing the minimum value
//	cout<<"The minimum element is :"<<MinNum;
//	return 0;
//}

//MINIMUM >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>MAXIMUM
//MINIMUM >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>MAXIMUM
//MINIMUM >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>MAXIMUM

//10. MAXIMUM...................................








//11. Problem Statement
//REVERSE OF ARRAY....***********************************
//REVERSE OF ARRAY....***********************************
//REVERSE OF ARRAY....***********************************
//#include<iostream>
//using namespace std;
//
//int main(){
//	int arr[5],i;
//	cout<<"Enter the elements of an array:";
//	for(i=0;i<5;i++){
//		cin>>arr[i];
//	}
//	
//	cout<<endl<<"Array Before reversing looks as : ";
//	for(i=0;i<5;i++){
//		cout<<arr[i]<<"\t";
//	}
//	
//	
//	cout<<endl<<"Array  after reversing looks as : ";
//	//FIRST APPROACH(281-283)  Reverse looping....from i=5 to t=1
////	for(i=4;i>=0;i--){
////		cout<<arr[i]<<"\t";
////	}
//	
//	
//	//SECOND APPROACH(286-293) using another array  to copy...last element of (arr[i])  to first element of (barr[i])
//	int barr[5];
//	for(i=0;i<5;i++){
//		barr[i]=arr[4-i];
//	}
//	for(i=0;i<5;i++){
//		cout<<barr[i]<<"\t";
//	}
//	
//	
//	
//	
//	return 0;
//}

//THIRD APPROACH:.......................................
//USING UTILITY FUNCTION:


//#include<iostream>
//using namespace std;
//
////int arr[i]=0, arr[j]=4;
//
//int main(){
//	int arr[5];
//	cout<<"Enter elements of array: ";
//	for(int i=0;i<5;i++){
//		cin>>arr[i];
//	}
//	cout<<endl<<"Element before reversing: ";
//	for(int i=0;i<5;i++){
//		cout<<arr[i]<<" \t";
//	}
//	
//	//here comes the logic of swap(a,b)
//	
//	cout<<endl<<"Reversed array is : ";
//	int i=0,j=4;
//	while(i<=j){
//		swap(arr[i],arr[j]);
//		i++;
//		j--;
//	}
//	for(int i=0;i<5;i++){
//		cout<<arr[i]<<" \t";
//	}
//	
//	
//}
//REVERSE OF ARRAY....***********************************
//REVERSE OF ARRAY....***********************************
//REVERSE OF ARRAY....***********************************



//12. PROBLEM....
//EXTREME POINT IN AN ARRAY

//#include<iostream>
//using namespace std;
//
//int main(){
//	int arr[5],i,j;
//	
//	cout<<"Enter elements of array: ";
//	for(i=0;i<5;i++){
//		cin>>arr[i];
//	}
//	cout<<endl<<"Array looks as: ";
//	for(i=0;i<5;i++){
//		cout<<arr[i]<<"\t";
//	}
//	cout<<endl<<"The extreme print in array is : ";
//	
//	i=0,j=4;  //initialisation of pointers
//	while(i<=j){
//		cout<<arr[i]<<"\t"; //print element from begining
//		swap(arr[i],arr[j]); //print element after swapping i.e first last then (second and second last) and so on...
//		cout<<arr[i]<<"\t";
//		i++;
//		j--;
//	}
//	
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main(){
//	int arr[10],arr1[10];
//	int i;
//	cout<<"Enter Elements of the array:"<<endl;
//	for(i=0;i<10;i++){
//		cin>>arr[i];
//	}
//	cout<<"Elements of array before doubling:"<<endl;
//		for(i=0;i<10;i++){
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl<<"Elements of the array after doubling it."<<endl;
//	for(i=0;i<10;i++){
//		arr[i]=2*arr[i];
//		cout<<arr[i]<<" ";
//	}
//	
//return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main(){
//	int arr[5];
//	int i;
//	
//	cout<<"Enter elements of an array:"<<endl;
//	for(i=0;i<5;i++){
//		cin>>arr[i];                            //taking input in the array
//	}
//	cout<<"The elements of the array is:"<<endl;
//	for(i=0;i<5;i++){
//		cout<<arr[i];							//printing the elements of array	
//	}
//	
//	
//	int sum=0;                                  //initialising the variable sum  
//	for(i=0;i<5;i++){
//		sum=sum+arr[i];							//calculating the sum
//	}
//	cout<<"The sum of elements of the array is:"<<sum<<endl;
//	
//return 0;
//}

//#include<iostream>
//using namespace std;
//int main(){
//	int arr[5];
//	int target;
//	int i;
//	
//	cout<<"Enter the elements of the array."<<endl;
//	for(i=0;i<5;i++){
//		cin>>arr[i];
//	}
//	cout<<"The elements of the array is:"<<endl;
//	for(i=0;i<5;i++){
//		cout<<arr[i];
//	}
//	cout<<endl<<"Enter your target";
//	cin>>target;
//	
//	bool flag=0;        
//	/*Flag: To indicate loop ends or continue... when a certain condition is met...
//	Initially, flag==0 means target is not found  AND  flag==1 means target is found..
//	*/
//	for(i=0;i<5;i++){
//		if(arr[i]==target){
//			flag=1;
//			break;
//		}
//	}
//	
//	if(flag==1){
//		cout<<"Target is found at index: "<<i<<endl;
//	}
//	else
//		cout<<"Target is not found in the array."<<endl;
//	
//	
//	
//return 0;
//}


////IMPLEMENTING Linear Search without using flag variable...
//#include<iostream>
//using namespace std;
//
//bool linearSearch(int arr[], int size, int target){    //it only returns true or false not the index..
//	for(int i=0;i<size;i++){
//		if(arr[i]==target){
//			return true;   //indicates target is found
//		}
//	}
//	return false;   //indicates target is not found
//}
//
//int main(){
//	int size=5;
//	int arr[size],i,target;
//	cout<<"Enter elements of the array."<<endl;
//	for(int i=0;i<size;i++){
//		cin>>arr[i];
//	}
//	cout<<"Enter your target element."<<endl;
//	cin>>target;
//	
//	bool answer=linearSearch(arr,size,target);
//	if(answer==true){
//		cout<<"Element is found <<endl;
//	}
//	else{
//		cout<<"Element is not found."<<endl;
//	}
//
//return 0;
//}



//ARRAY AND FUNCTIONS COMBINED..........
//#include<iostream>
//using namespace std;
//void printArray(int arr[], int size){
//	for(int i=0;i<size;i++){
//		cout<<arr[i]<<" ";
//	}	
//}
//
//
////Creating the main function
//int main(){
//	int arr[5];//array creation
//	int size=5;
//	cout<<"Enter elements of the array."<<endl;
//	//taking input for the array
//	for(int i=0;i<size;i++){
//		cin>>arr[i];
//	}	
//	//calling the printArray function
//	cout<<"The elements of the array are:"<<endl;
//	printArray(arr,size);
//	return 0;
//}

#include<iostream>
using namespace std;

void ONE_ZEROCount(int arr[], int size){     //declaring and defining the function..
	int OneCount=0, ZeroCount=0;
	for(int i=0;i<size;i++){
		if(arr[i]==0){
			ZeroCount++;
		}
		else if( arr[i]==1){
			OneCount++;
		}		
	}
	//printing outside the loop..
	if(ZeroCount==0  && OneCount==0){
		cout<<"No zeroes or Ones are present."<<endl;
	}
	else{
	cout<<"Number of zeroes is:"<<ZeroCount<<endl;
	cout<<"Number of Ones is:"<<OneCount<<endl;
		
	}
}

int main(){
	int size=5;
	int arr[size],i;
	cout<<"Enter the elements of the array:"<<endl;
	for(i=0;i<size;i++){
		cin>>arr[i];                      //taking input into the array..
	}
	ONE_ZEROCount(arr,size); //calling the function
	return 0;
}

















