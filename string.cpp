#include<iostream>
#include<string.h>
#define default_size 10
using namespace std;

class String{
	private:char *str;
			int size;
	public:String()
			{
				size=default_size;
			  str=new char[size];
			}
			String(int n)
			{
				size=n;
				str=new char[size];
			}
			void input();
			void output();
			
		     void operator+ (String&);
			 void operator= (String&);
			friend int operator== (String&,String&);
};
void String::input()
{
	cout<<"\nEnter String:";
	gets(str);
}
void String::output()
{
	cout<<"\nOutput:";
	puts(str);
}/*cc*/

void String::operator+(String &a)
{
	//String temp;
	size=size+a.size;
	strcat(str,a.str);
	//strcat(temp.str,str);
	//return temp;
}

void String::operator=(String &a)
{
	strcpy(this->str,a.str);
}

int operator==(String &a,String &b)
{
	if(strcmpi(a.str,b.str)==0)
		return 1;
	return 0;	
}

int main()
{
	String v(5),x(5),z(5),y(5);
	v.input();
	x.input();
	if(v==x)
		cout<<"\nEqual(ignoring lower & upper cases)";
	else
		cout<<"\nUnequal";
	v+x;
	v.output();
	y=x;
	y.output();		
	return 0;
}
