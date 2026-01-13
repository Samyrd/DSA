#include<iostream>
using  namespace std;


Inline Concepts: 

inline int square(int);

int main(){
	int a,b;
	cout>>"Enter a number: ";
	cin>>a;
	b=square(a);
	cout<<"Square of "<<a<<" is "<<b;
	cout<<endl;
	
	return 0;
}

int square(int x){
	return x*x;
}




Default Arguments:

int add(int,int, int=0);	
int main(){
	int a,b,c;
	cout<<"Enter three numbers to add: ";
	cin>>a,b,c;
	cout<<"Sum is "<<add(a,b)<<endl;
	cout<<"Sum is "<<add(a,b,c)<<endl;
	
	cout<<endl;
	return 0;
}

int add(int x, int y, int=0){  //default arguments can only be after formal arguments.
	return x+y+z;
}





void f1(int,int);  //by Value
void f2(int *, int*);//By address
void f3(int &, int &);//By reference


void f1(int x, int y){  //By value definition
	
}

void f2(int *p,int *r){  // By address definintion
	
}

void f3(int &x, int &y){ // By reference definition
	
}

int main(){
	int a=5,b=6;
	f1(a,b);  //Call by value C C++
	f2(&a,&b); // Call by reference (C) || Call by address(C++)
	f3(a,b); //Call by reference C++ only
	
	return 0;
}

