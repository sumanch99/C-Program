#include<iostream>
using namespace std;
class shape
{
protected:double x,y;
public:void get_data()
		{
		cin>>x>>y;
		}
		//double get_x(){return x;}
		//double get_y(){return y;}
		virtual void display_area(){}
};
class triangle:public shape
{double a;
public:void display_area()
		{
		a=(x*y)/2;
		cout<<" Area of triangle = "<<a;
		}
};
class rectangle:public shape
{
double a;	
public:void display_area()
		{
		a=x*y;
		cout<<" Area of rectangle = "<<a;
		}
};
int main()
{
shape *s[2];
triangle t;
s[0]=&t;
rectangle r;
s[1]=&r;
cout<<" Enter the value of x & y for triangle: ";
s[0]->get_data();
cout<<" Enter the value of x & y for rectangle: ";
s[1]->get_data();
s[0]->display_area();
s[1]->display_area();
return 0;
}
