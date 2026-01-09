//#include<iostream>
//int main(){
//	int a,b,c;
//	std::cout<<"Enter two numbers to add ";
//	std::cin>>a>>b;
//	c=a+b;
//	std::cout<<"sum of"<<a<<" and "<<b<<" is "<<c;
//	
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//
//int main(){
//	int a,b,c;
//	cout<<"Enter two numbers to add ";
//	cin>>a>>b;
//	c=a+b;
//	cout<<"sum of"<<a<<" and "<<b<<" is "<<c;
//	
//	return 0;
//}
//
//
//
//#include<iostream>
//using namespace std;
////functions declarations
//int factorial(int n);
//int Combination(int n, int r);
//int permutation(int n, int r);
//
//int main(){
//	int n, r,F,c,p;
//	cout<<"Enter value of n and r";
//	cin>>n>>r;
//	F=factorial(n);
//	cout<<"The factorial of number is "<<F<<endl;
//	c=Combination(n,r);
//	cout<<"The combination of n and r is "<<c<<endl;
//	p=permutation(n,r);
//	cout<<"The permutaion of n and r is "<<p;
//	return 0;
//}
//
////combination
//int Combination(int n, int r){
//	return factorial(n)/(factorial(r)*factorial(n-r));
//}
//
////permutation
//
//int permutation(int n, int r){
//	return factorial(n)/factorial(n-r);
//}
//
////factorial definition
//int factorial(int n ){
//	int i,fact=1;
//	for(i=1;i<=n;i++){
//		fact=fact*i;
//	}
//	return fact;
//}



#include<iostream>
using namespace std;

int main(){
	int n,y=0;
	cout<<"Enter a number:"<<endl;
	cin>>n;
	while(n!=0){
		y=y*10+n%10;
		n=n/10;
	}
	cout<<"The reverse of a number is: "<<y<<endl;
	
	return 0;
}
