#include<iostream>
using namespace std;
class Item{
	private:int x;
			float y;
			char z;
	public:Item()
			{
				x=y=0;
				z=0;
		    }
			Item(int a){x=a;y=0;z=0;}				
			Item(float b){x=0;y=b;z=0;}
			Item(char c){x=0;y=0;z=c;}
			Item(int a,float b)
			{
				x=a;
				y=b;
				z=0;
			}
			Item(int a,char c)
			{
				x=a;
				y=0;
				z=c;
			}
			Item(float b,char c)
			{
				x=0;
				y=b;
				z=c;
			}
			Item(int a,float b,char c)
			{
				x=a;
				y=b;
				z=c;
			}
			void input();
			void output();
			Item operator+(int);
};
void Item::input()
{
	cout<<"Enter an integer:";
	cin>>x;
	cout<<"Enter a float number:";
	cin>>y;
	cout<<"Enter a character";
	cin>>z;
}
Item Item::operator+(int num)
{
	Item temp;
	temp.x=x+num;
	temp.y=y+num;
	temp.z=z+num;
	return temp;
}

void Item::output()
{
	cout<<"Results:\nX="<<x<<"\nY="<<y<<"\nZ="<<z;
}
int main()
{
	Item obj(2,3.5,'A');
	/*Item obj;
	obj.input();*/
	obj=obj+7;
	obj.output();
}
