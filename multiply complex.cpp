#include <iostream>
using namespace std;
class Complex
{
	private:float real,imag;
	public: Complex()
			{
				real=imag=0;
			}
			Complex(float r)
			{
				real=r;
				imag=0;
			}
			Complex(float r,float m)
			{
				real=r;
				imag=m;
			}
			Complex(Complex &a)
			{
				real=a.real;
				imag=a.imag;
			}
			void input()
			{
				cout<<"Enter real and imaginary part respectively of complex number:";
				cin>>real>>imag;
			}
			void output()
			{
				cout<<real<<"+"<<imag<<"i";
			}
			Complex mult(Complex &a)
			{
				Complex temp;
				temp.real=real*a.real-imag*a.imag;
				temp.imag=real*a.imag+imag*a.real;
				return temp;
			}
};
int main()
{
	float r,m;
	Complex c1;
	c1.input();
	Complex c2;
	c2.input();
	Complex c3;
	c3=c1.mult(c2);
	cout<<"Resultant Complex No. ";
	c3.output();
	
	
	return 0;
}
