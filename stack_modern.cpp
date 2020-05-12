#include<iostream>
#define default_size 10
using namespace std;
class Item{
	private:int *stack;
			int top;
			int size;
	public:Item()
			{
				size=default_size;
				top=-1;
				stack=new int[size];
			}
			Item(int a)
			{
				size=a;
				top=-1;
				stack= new int[size];
			}
			void push(int);
			int pop();
			int pop(int);
			void display();
			~Item(){delete stack;}
};
void Item::push(int element)
{
	if(top==size-1)
		cout<<"\nStack Overflow";
	else
		stack[++top]=element;	
}
int Item::pop(){
	if(top==-1)
		cout<<"\nStack Underflow";
	else
		return stack[top--];			
}
void Item::display()
{
	cout<<"\nStack:\n";
	for(int i=0;i<=top;i++)
		cout<<" "<<stack[i];
}
int Item::pop(int delete_it)
{
	for(int i=0;i<=top;i++)
		if(stack[i]==delete_it)
		{
			for(int j=i+1;j<=top;j++)
				stack[i]=stack[j];
			top--;	
		}
}
int main()
{
	Item stk(5);
	/*int ch,x;
	do{
		cout<<"\n1.Push\n2.Pop\n3.Display\n4.Exit\n\nEnter your choice:";
		cin>>ch;
		switch(ch){
			case 1 : cout<<"\nEnter integer:";
					 cin>>x;
					 stk.push(x);
					 break;
			case 2 : cout<<"\nDeleted element:"<<stk.pop();
					 break;
			case 3:  stk.display();
					 break;
			case 4:  cout<<"\nThe End.";
					 break;
			default: cout<<"\nWrong choice";		 		 		 		 
		}
	}while(ch);*/
	stk.push(5);
	stk.push(6);
	stk.pop(5);
	stk.display();
    return 0;
}
	stk.display()
