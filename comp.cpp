#include<iostream>
using namespace std;
class Complex{
	private:float real,imag;
	public:Complex(){real=imag=0;}
		   Complex(float x){real=x,imag=0;}
		   Complex(float x,float y){real=x,imag=y;}
		   Complex(Complex &a){real=a.real,imag=a.imag;}
		   ~Complex(){}
		   void input()
		   {
		   	cout<<"\nEnter real and imaginary part:";
		   	cin>>real>>imag;
		   }
		   void output()
		   {
		   	cout<<"\nResult:";
		   	cout<<real<<"+i"<<imag;
		   }		   
		  friend Complex operator+(Complex&a,Complex&b);
		  friend Complex operator+(Complex &a,int);
		  friend Complex operator+(int,Complex &a);
};
Complex operator+(Complex &a,Complex &b)

{
	Complex temp;
	temp.real=b.real+a.real;
	temp.imag=b.imag+a.imag;
	return temp;
}
 Complex operator+(int k,Complex &a)
{
	Complex temp;
	temp.real=a.real+k;
	temp.imag=a.imag;
	return temp;
}
Complex operator+(Complex &a,int k)
{
	Complex temp;
	temp.real=a.real+k;
	temp.imag=a.imag;
	return temp;
}
int main()
{
	Complex n1(5,6),n2(7,8);
	Complex n3,n4,n5;
	n3=n1+n2;
	n4=7+n1;
	n5=8+n2;
	n3.output();
	n4.output();
	n5.output();
	return 0;
}

