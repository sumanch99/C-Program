#include <iostream>
using namespace std;
class Item
{
	private: int n;
			 float x;
	public:  void input(int a,float b)
			 {
			 	n=a;
			 	x=b;
			 }
			 void output()
			 {
			 	cout<<"\nN="<<n
			 		<<"\nX="<<x;	
			 }
			 float cal();
};
float Item::cal()
	{
		float sum,term;
		sum=term=1;
		for(int i=1;i<=n;i++)
			{
				term=term*x/i;
				sum+=term;
			}
		return sum;	
	}
					  
int main()
{
	int m;
	float z,y;
	cout<<"\nEnter n and x:";
	cin>>m>>y;
	Item obj;
	obj.input(m,y);
	z=obj.cal();
	cout<<"\nOutput:";
	obj.output();
	cout<<"\nResult="<<z;
	return 0;
}
