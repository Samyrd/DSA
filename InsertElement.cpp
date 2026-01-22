#include<iostream>
using namespace std;

int main(){
	int p,ele;
	int arr[10]={12,13,14,15,16,17,18,19,20,21};
	
	cout<<"Printing the array elements before inserting new element."<<endl;
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"Enter the position where you want to insert the element."<<endl;
	cin>>p;
	cout<<endl<<"Enter the element you want to enter into the array."<<endl;
	cin>>ele;
	for(int i=10;i>p;i--){
		arr[i]=arr[i-1];
	}
	arr[p]=ele;
	cout<<"Array after insertion of the element"<<endl;
	for(int i=0;i<11;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
