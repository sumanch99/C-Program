#include<iostream>
using namespace std;
class Item{
	private: int x;
	public: Item()
			{
				x=0;
				cout<<"\nDefault Constructor";
			}
			Item(int a)
			{
				x=a;
				cout<<"\nConstructor with X= "<<x;
			}
			Item(Item &a)
			{
				x=a.x;
				cout<<"\nCopy Constructor with X= "<<x;
			}
			~Item()
			{
				cout<<"\nX= "<<x;
			}
			void fun(int );
};
void Item::fun(int a)
{
	Item item1;
	Item item2(a);
	Item item(a+1);
	return;
}
int main()
{
	Item obj1(10);
	Item obj2;
	Item obj3(obj1);
	obj2.fun(5);
	Item obj4(20);
	obj4.fun(15);
	return 0;
}
