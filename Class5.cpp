#include<iostream>
using namespace std;

class Complex
{
	private:
		int a,b;
	public:
		void SetData(int x, int y)
		{
			a=x;
			b=y;
		}
		void ShowData();
};

void Complex::ShowData()
{
	cout<<endl<<"Value of a= "<<a<<"value of b ="<<b;
}

void f1()
{
	int c=0;
	static int d;
	c++;
	d++;
	cout<<endl<<"Value of c ="<<c<<"Value of d ="<<d;
}


int main(){
	//f1();
	//f1();
	Complex c1,c2;
	c1.SetData(3,4);
	c2.SetData(5,6);
	cout<<c1.a<<" "<<c1.b; //error
	c1.ShowData();
	c2.ShowData();
	cout<<endl;
	return 0;
}


/*
Types of variables in C++:
1. Global Variable (C, C++)
2. Local Variable(C, C++)
3. static local Variable(C and C++)
4. Instance Member Variable(C and C++) ||Structure member Variable
5. Static Member Variable(C++)

*/


