//1. Problem Statement: Print unique element of an array
//
//#include<iostream>
//using namespace std;
//
//int UniqueElement(int arr[],int n){
//	int ans=0;
//	for(int i=0;i<5;i++){
//		ans=ans^arr[i];  //it xor all elements...
//	}
//	return ans;
//}
//
//
//int main(){
//	cout<<"Enter elements of an array: ";// Taking input
//	int arr[5];
//	for(int i=0;i<5;i++){
//		cin>>arr[i];
//	}
//	cout<<endl<<"Array looks like this : ";  //Displaying array formed
//	for(int i=0;i<5;i++){
//		cout<<arr[i]<<"\t";
//	}
//	int unique=UniqueElement(arr,5);  // calling the functon...
//	cout<<endl;
//	cout<<"The unique Element is: "<<unique;
//	
//	return 0;
//	
//}




//2. Problem Statement: POSSIBLE PAIRS.....

#include<iostream>
using namespace std;
int main(){
	cout<<"Enter elements of an array: ";// Taking input
	int arr[3];
	for(int i=0;i<3;i++){
		cin>>arr[i];
	}
	cout<<endl<<"Array looks like this : ";  //Displaying array formed
	for(int i=0;i<3;i++){
		cout<<arr[i]<<"\t";
	}
	
	cout<<endl;
	int i=0,j;
	while(i<3){
		j=2;
		while(j>=0){
			//cout<<arr[i]<<" "<<cout<<arr[j]<<" "<<"\t";
			cout << "(" << arr[i] << ", " << arr[j] << ")" <<"\t ";
			
			j--;
		}
		
	i++;
	}
	return 0;
	
}

