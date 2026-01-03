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



//REVISING THE CONCEPT..    02-01-2026
//#include<iostream>
//using namespace std;
//
//int UniqueElement(int arr[], int n){
//	int ans=0;
//	for(int i=0;i<n;i++){
//		ans=ans^arr[i];
//	}
//	return ans;
//}
//
//
//int main(){
//	int arr[]={2,3,2,4,3,1,4};
//	int n=7;
//	int ans=UniqueElement(arr,n);
//	cout<<"Unique element is:  "<<ans<<endl;
//	return 0;
//}



//2. Problem Statement: POSSIBLE PAIRS.....

// #include<iostream>
// using namespace std;
// int main(){
// 	cout<<"Enter elements of an array: ";// Taking input
// 	int arr[3];
// 	for(int i=0;i<3;i++){
// 		cin>>arr[i];
// 	}
// 	cout<<endl<<"Array looks like this : ";  //Displaying array formed
// 	for(int i=0;i<3;i++){
// 		cout<<arr[i]<<"\t";
// 	}
	
// 	cout<<endl;
// 	int i=0,j;
// 	while(i<3){
// 		j=2;
// 		while(j>=0){
// 			//cout<<arr[i]<<" "<<cout<<arr[j]<<" "<<"\t";
// 			cout << "(" << arr[i] << ", " << arr[j] << ")" <<"\t ";
			
// 			j--;
// 		}
		
// 	i++;
// 	}
// 	return 0;
	
// }

//REVISING THE CONCEPT..  02-01-2026

//#include<iostream>
//using namespace std;
//
//void Pairs(int arr[], int n){
//	
//	//using for loop...
////	for(int i=0;i<n;i++){               //if n/2 then only one of all pairs will be printed
////		for(int j=0;j<n;j++){
////			cout<<arr[i]<<", "<<arr[j]<<endl;
////		}
////	}
//	
//	
//	//using the while loop..or pointers from left and right..
//	int i=0;
//	while(i<n){
//		int j=n-1;
//		while(j>=0){
//			cout<<arr[i]<<" "<<arr[j]<<endl;
//			j--;
//		}
//		i++;
//	}	
//}
//int main(){
//	int arr[]={10,20,30};
//	int n=3;
//	cout<<"Possible pairs are: "<<endl;
//	Pairs(arr,n);
//	return 0;
//}


//3. PRINT THE TRIPLET..
//
//#include<iostream>
//using namespace std;
//
//void triplets(int arr[], int n){
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			for(int k=0;k<n;k++){
//				cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
//			}
//		}
//	}
//	
//}
//
//int main(){
//	int arr[]={10,20,30};
//	int n=3;
//	cout<<"The triplets are: "<<endl;
//	triplets(arr,n);
//	
//	
//	return 0;
//}


//4. Two pair sum: target di rhi hogi aur puchegi ki batao ki kisi do element ko sum karne pe target mil raha hai ya nhi...
//arr[]={0,1,-1,-3,2}
//target=(1+-3=-2)
//output=true
//
//#include<iostream>
//using namespace std;
//
//void TwoPairSum(int arr[],int n){
//	bool flag=0;
//	int target=-2;
//	for(int i=0;i<n;i++){
//		for(int j=i+1;j<n;j++){
//			if(arr[i]+arr[j]==target){
//				flag=1;
//				break;  //breaks the inner loop
//			}
//			
//		}
//		if(flag)
//		break;
//		
//	}
//	if(flag==1){
//		cout<<"Target is found"<<endl;
//	}
//	if(flag==0){
//		cout<<"Target is not found"<<endl;
//	}
//	
//}
//
//int main(){
//	int arr[]={0,-1,1,-3,2};
//	int n=5;
//	TwoPairSum(arr,n);
//	return 0;
//}

//Just little changes in passing the arguments..
//#include<iostream>
//using namespace std;
//
//void TwoPairSum(int arr[],int n,int target){
//	bool flag=0;
//	for(int i=0;i<n;i++){
//		for(int j=i+1;j<n;j++){
//			if(arr[i]+arr[j]==target){
//				flag=1;
//				break;  //breaks the inner loop
//			}
//			
//		}
//		if(flag)
//		break;
//		
//	}
//	if(flag==1){
//		cout<<"Target is found"<<endl;
//	}
//	if(flag==0){
//		cout<<"Target is not found"<<endl;
//	}
//	
//}
//
//int main(){
//	int arr[]={0,-1,1,-3,2};
//	int n=5;
//	int target=-2;
//	TwoPairSum(arr,n,target);
//	return 0;
//}

//5.SHIFT ELEMENT BY -1: RIGHT SHIFT
//#include<iostream>
//using namespace std;
//
//void ShiftElementRight(int arr[],int size){
//	int temp=arr[size-1];
//	for(int i=size-1;i>0;i--){
//		arr[i]=arr[i-1];
//	}
//	arr[0]=temp;
//	for(int i=0;i<size;i++){
//		cout<<i<<":"<<arr[i]<<" ";
//	}
//}
//
//int main(){
//	int arr[]={10,20,30,40,50,60};
//	int size=6;
//	cout<<"Before Shifting: ";
//	for(int i=0;i<size;i++){
//		cout<<i<<":"<<arr[i]<<" ";
//	}
//	cout<<endl<<"Shifted to its RIGHT: ";
//	ShiftElementRight(arr,size);
//	return 0;
//}


//5.1: SHIFT ELEMENT BY -1: lEFT SHIFT

//#include<iostream>
//using namespace std;
//
//void ShiftElementRight(int arr[],int size){
//	int temp=arr[0];     //First change
//	for(int i=0;i<size;i++){    //change in looping
//		arr[i]=arr[i+1];
//	}
//	arr[size-1]=temp;       //second change
//	for(int i=0;i<size;i++){
//		cout<<i<<":"<<arr[i]<<" ";
//	}
//}
//
//int main(){
//	int arr[]={10,20,30,40,50,60};
//	int size=6;
//	cout<<"Before Shifting: ";
//	for(int i=0;i<size;i++){
//		cout<<i<<":"<<arr[i]<<" ";
//	}
//	cout<<endl<<"Shifted to  its LEFT: ";
//	ShiftElementRight(arr,size);
//	return 0;
//}



//6.SORTING 0s AND 1s 

//THREE APPROACH: 1. COUNTING, 2. TWO POINTERS, 3. SORT()
//I have used the Counting approach....
#include<iostream>
using namespace std;

void SortZeroesOnes(int arr[], int size){
	int ZeroCount=0;
	int OneCount=0;
	for(int i=0;i<size;i++){
		if(arr[i]==0){
			ZeroCount++;
		}
		if(arr[i]==1){
			OneCount++;
		}
	}
	cout<<endl<<"No. of Zeroes: "<<ZeroCount<<endl;
	cout<<"No. of Ones: "<<OneCount<<endl;
	
	cout<<"Array with sorted zeroes and ones: ";
	int i=0;
	while(ZeroCount--){   //this loop runs till ZeroCount becomes zero...
		arr[i]=0;
		i++;
	}
	while(OneCount--){    //this loop runs till OneCount becomes zero...
		arr[i]=1;
		i++;
	}
	
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	

}


int main(){
	int arr[]={1,0,0,1,0,1,0,1,1};
	int size=9;
//	cout<<"Array with sorted zeroes and ones: ";
	SortZeroesOnes(arr,size);
	return 0;
}






