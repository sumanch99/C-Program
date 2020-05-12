#include<iostream>
using namespace std;
class Time{
	int second;
	public:Time(){second=0;}
		   Time(int h){second=h*3600;}
		   Time(int h,int m){second=3600*h+60*m;}
		   Time(int h,int m,int s){second=3600*h+60*m+s;}
		   Time(Time &t){second=t.second;}
		   ~Time(){}
		   void display()
		   {
		   	cout<<"\nTime : "<<second<<" Sec";
		   }
		   operator int(){
		   	return second;
		   }
};
int main()
{
	int s=Time(1,5,10);
	cout<<"\nTime : "<<s<<" Sec";
	return 0;
}
