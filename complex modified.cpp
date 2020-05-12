#include<iostream>
using namespace std;
class Complex{
	private:float real,imag;
	public:Complex()
			{
			real=imag=0;
		}
			Complex(float r){
				real=r;
				imag=0;
			}
			Complex(float r,float m){
				real=r;
				imag=m;
			}
			Complex(Complex &a){
				real=a.real;
				imag=a.imag;
			}
			~Complex(){ }
		
			void input();
			void output();
			
			friend Complex operator+(Complex&a,Complex &b);
			friend Complex operator+(Complex&a,int);
			friend Complex operator+(int,Complex&a);
			};
			
		  Complex operator+(Complex &a,Complex &b){
				Complex temp;
				temp.real=b.real+a.real;
				temp.imag=b.imag+a.imag;
				return temp;
			}
			Complex operator+(Complex &a,int k){
				Complex temp;
				temp.real=a.real+k;
				temp.imag=a.imag;
				return temp;
			}
			Complex operator+(int k,Complex &a){
				Complex temp;
				temp.real=a.real+k;
				temp.imag=a.imag;
				return temp;
			}
			void Complex::input(){
				cout<<"Enter Real and Imaginary Parts of a Complex Number:";
				cin>>real>>imag;
			}
			void Complex::output(){
				cout<<"\nResultant Complex Number:"<<real<<"+i"<<imag;
			}

 int main(){
 	Complex c1,c2,c3,c4,c5;
 	c1.input();
 	c2.input();
 	c3=c1+c2;
 	c4=c3+9;
 	c5=9+c2;
	c3.output();
 	c4.output();
 	c5.output();
 	return 0;
 	
 }

