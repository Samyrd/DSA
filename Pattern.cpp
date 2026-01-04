#include<iostream>
using namespace std;

//1.
//*
//**
//***
//****
//*****
//int main(){
//	for(int i=1;i<=5;i++){
//		for(int j=1;j<=5;j++){
//			if(j<=i)
//				cout<<"*";
//			else
//				cout<<" ";
//		}
//	cout<<endl;
//	}
//	return 0;
//}



//2. 
//    *
//   **
//  ***
// ****
//*****
//int main(){
//	for(int i=1;i<=5;i++){
//		for(int j=1;j<=5;j++){
//			if(j>=6-i)
//				cout<<"*";
//			else
//				cout<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}



//3.
//*****
//****
//***
//**
//*


//int main(){
//	for(int i=1;i<=5;i++){
//		for(int j=1;j<=5;j++){
//			if(j<=6-i)
//				cout<<"*";
//			else{
//				cout<<" ";
//			}
//		}
//		cout<<endl;
//	}
//	return 0;
//}



//4.
//*****
// ****
//  ***
//   **
//    *

//int main(){
//	for(int i=1;i<=5;i++){
//		for(int j=1;j<=5;j++){
//			if(j>=i)
//				cout<<"*";
//			else{
//				cout<<" ";
//			}
//		}
//		cout<<endl;
//	}
//	return 0;
//}




//5.
//1
//12
//123
//1234
//12345

//int main(){
//	for(int i=1;i<=5;i++){
//		for(int j=1;j<=5;j++){
//			if(j<=i)
//				cout<<j;
//			else{
//				cout<<" ";
//			}
//		}
//		cout<<endl;
//	}
//	return 0;
//}



//6.
//1
//21
//321
//4321
//54321

//int main(){
//	for(int i=1;i<=5;i++){
//		int k=i;
//		for(int j=1;j<=5;j++){
//			if(j<=i)
//				cout<<k;
//			else{
//				cout<<" ";
//			}
//			k--;
//		}
//		cout<<endl;
//	}
//	return 0;
//}



//7.
//1
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15 

//int main(){
//	int k=1;
//	for(int i=1;i<=5;i++){
//		for(int j=1;j<=5;j++){
//			if(j<=i)
//				cout<<k++<<" ";
//			else{
//				cout<<" ";
//			}
//		}
//		cout<<endl;
//	}
//	return 0;
//}


//8.
//A B C D E 
//  A B C D
//    A B C
//      A B

//int main(){
//	for(int i=1;i<=5;i++){
//		char k='A';
//		for(int j=1;j<=5;j++){
//			if(j>=i)
//				cout<<k++;
//			else{
//				cout<<" ";
//			}
//		}
//		cout<<endl;
//	}
//	return 0;
//}



//9.
//A B C D E
//  B C D E
//    C D E 
//      D E
//        E

//int main(){
//
//	for(int i=1;i<=5;i++){
//		char k='A';
//		for(int j=1;j<=5;j++){
//			if(j>=i)
//				cout<<k;
//			else{
//				cout<<" ";
//			}
//		k++;
//		}
//		cout<<endl;
//	}
//	return 0;
//}




//10.
//AAAAA
// BBBB
//  CCC
//   DD
//    E
//#include <iostream>
//using namespace std;
//
//int main(){
//	char k='A';
//	for(int i=1;i<=5;i++){
//		
//		for(int j=1;j<=5;j++){
//			if(j>=i)
//				cout<<k;
//			else{
//				cout<<" ";
//			}
//		}k++;
//		cout<<endl;
//	}
//	return 0;
//}



//11.
//*****
//*   *
//*   *
//*   *
//*****

int main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(i==1||i==5||j==1||j==5)
				cout<<"*";
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}

























