
//1. 
//#include <iostream>
//using namespace std;
//
//int main(){
//	//int i,j;
////	int arr[i][j]={{1,2,3},{4,5,6}};
//	int row=2;
//	int column=3;
//	int arr[2][3];
//	
//	cout<<"Enter the matrix: "<<endl;
//	for(int i=0;i<row;i++){
//		for(int j=0;j<column;j++){
//			cin>>arr[i][j];
//	}
//}
//	
//	cout<<"Row wise matrix is: "<<endl;
//	for(int i=0;i<row;i++){
//		for(int j=0;j<column;j++){
//				cout<<arr[i][j];
//			}
//		cout<<endl;
//		}
//		
//	cout<<"Column wise matrix is: "<<endl;
//	for(int i=0;i<column;i++){
//		for(int j=0;j<row;j++){
//				cout<<arr[j][i];
//			}
//		cout<<endl;
//		}
//		
//	return 0;
//}

//2. Transpose of the matrix..
//#include<iostream>
//using namespace std;
//int main(){
//	int i,j;
//	int row=3;
//	int column=3;
//	int arr[3][3], brr[3][3];
//	cout<<"Enter the matrix: "<<endl;
//	for(int i=0;i<row;i++){
//		for(int j=0;j<column;j++){
//			cin>>arr[i][j];
//	}
//}
//	cout<<"Row wise matrix is: "<<endl;
//	for(int i=0;i<row;i++){
//		for(int j=0;j<column;j++){
//				cout<<arr[i][j];
//			}
//		cout<<endl;
//		}
//	
//	for(int i=0;i<row;i++){
//		for(int j=0;j<column;j++){
//			brr[j][i]=arr[i][j];	
//		}
//	}
//	cout<<"Transpose of the matrix:"<<endl;
//	for(int i=0;i<row;i++){
//		for(int j=0;j<column;j++){
//			cout<<brr[i][j];	
//		}
//		cout<<endl;
//	}
//	
//		
//	return 0;
//	
//}


//INTRODUCTION TO VECTOR: IT IS SAME AS ARRAY BUT DYNAMIC IN NATURE.

#include <iostream>
#include <vector>
using namespace std;


int main(){
	vector<vector< int >> arr;
	vector<int>a{1,2,3};
	vector<int>b{4,5,6};
	vector<int>c{7,8,9};
//	vector<vector<int>> arr = {
//        {1,2,3},
//        {4,5,6},
//        {7,8,9}
//    };
	
	arr.push_back(a);
	arr.push_back(b);
	arr.push_back(c);
	for(int i=0;i<arr.size();i++){
		for(int j=0;j<arr[i].size();j++){
			cout<<arr[i][j];	
		}
		cout<<endl;
	}
	return 0;
}
