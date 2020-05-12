#include<iostream>
using namespace std;
class Complex{
	private: int real,imag;
	public: Complex(){real=imag=0;}
			Complex(int a){real=a,imag=0;}
			Complex(int a,int b){real=a,imag=b;}
			~Complex(){}
			void input()
			{
				cout<<"\nEnter real & imaginary parts of complex number:";
				cin>>real>>imag;
			}
			void output()
			{
				cout<<"\nResult is: ";
				cout<<real<<"+i"<<imag;
			}
			Complex operator+(Complex&);
};
Complex Complex::operator+(Complex &a)
{
	Complex temp;
	temp.real=real+a.real;
	temp.imag=imag+a.imag;
	return temp;
}
int main()
{
	Complex number1(10,20);
	Complex number2(5);
	Complex number;
	number=number1+number2;
	number.output();
	return 0;
}
