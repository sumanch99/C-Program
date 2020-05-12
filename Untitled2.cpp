#include<iostream>
using namespace std;
class Item
{
    private:int x,y;
    public: Item()
    		{
    			x=y=0;
			}
			Item(int a)
			{
				x=a;
				y=0;
			}
			Item(int m,int n)
			{
				x=m;
				y=n;
			}
			void output()
			{
				cout<<"\nx="<<x<<"\ny="<<y;
				
			}
			Item add(Item &a)
			{
				Item temp;
				temp.x=x+a.x;
				temp.y=y+a.y;
				return temp;
			}
};

int main(){
	int x,y;
	cout<<"\nEnter x & y for 1st object:";
	cin>>x>>y;
	Item obj1(x,y);
	cout<<"\nEnter x & y for 2nd Object:";
	cin>>x>>y;
	Item obj2(x,y);
	Item obj3=obj1.add(obj2);
	cout<<"\nResultant Object:";
	obj3.output();
    return 0;
}
