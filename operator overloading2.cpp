#include<iostream>
using namespace std;
class Vector{
	private:int *v;
			int n;
	public: Vector();
			Vector(int);
			Vector(Vector &);
			~Vector(){}
			void input();
			void output();
			Vector operator+(Vector&);		
};
Vector::Vector()
{
	n=0;
	v=NULL;
}
Vector::Vector(int n)
{
	this->n=n;
	v=new int[n];
	for(int i=0;i<n;i++)
		v[i]=0;
}
Vector::Vector(Vector &a)
{
	n=a.n;
	v=new int[n];
	for(int i=0;i<n;i++)
		v[i]=a.v[i];
}
Vector Vector::operator+(Vector &a)
{
	Vector temp;
	temp.n=a.n;
	temp.v=new int[temp.n];
	for(int i=0;i<temp.n;i++)
		temp.v[i]=v[i]+a.v[i];
	return temp;	
}
void Vector::input()
{
	cout<<"\nEnter "<<n<<" integers: ";
	for(int i=0;i<n;i++)
		cin>>v[i];
}
void Vector::output()
{
	cout<<"Result: ";
	for(int i=0;i<n;i++)
		cout<<v[i]<<" ";
}
int main()
{
	int n;
	cout<<"How many elements in each vector?:";
	cin>>n;
	Vector vect1(n),vect2(n),vect;
	cout<<"1st Vector: ";
	vect1.input();
	cout<<"2nd Vector: ";
	vect2.input();
	vect=vect1+vect2;
	vect.output();
	return 0;
}
