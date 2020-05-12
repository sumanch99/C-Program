#include <iostream>
using namespace std;
class Item{
	
	private : int x;
	
	public : Item()
			{
				x=0;
			}
			Item(char a)
			{
				x=a;
			}
			/*Item(Item &a)
			{
				x=a.x;
			}*/
			void input()
			{
				cout<<"Enter:";
				cin>>x;
			}
			void output()
			{
				cout<<x;
			}
			void interchange(Item &a,Item &b)
			{
				Item temp;
				temp=a;
				a=b;
				b=temp;
			}
	
	
};
int main()
{
	Item obj1,obj2;
	obj1.input();
	obj2.input();
	obj2.interchange(obj1,obj2);
	cout<<"Output:\n";
	//cout<<"\n";
	obj1.output();
	cout<<"\n";
	obj2.output();
	return 0;
}
