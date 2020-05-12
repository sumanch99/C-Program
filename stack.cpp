#include<iostream>
#define MAX 10
using namespace std;
class Stack
{
    private:int a[MAX];
        	int top;
    public: Stack(){
    		top=-1;
			}    
        	void push(int);
        	int pop();
        	void display();
};

void Stack::push(int n){
    if(top==MAX-1)
    	cout<<"\nStack Overflow";
    else
    	a[++top]=n;
}
 
int Stack::pop(){
    if(top==-1)
    	cout<<"Stack Underflow";
    else	
    	return a[top--];
     
}
 
void Stack::display(){
    cout<<"Stack:\n ";
    for(int i=0; i<=top; i++)
        cout<<a[i]<<" ";
}
 
int main(){
    Stack stk;
    int ch,x;
     
    do
    {
        cout<<"\n0.Exit."
        	  "\n1.Push"
        	  "\n2.Pop"
        	  "\n3.Display";
         
        cout<<"\nEnter your choice: ";
        cin>>ch;
         
        switch(ch){
            case 1:
                cout<<"Enter item to insert: ";
                cin>>x;
                stk.push(x);
            	break;
            case 2:
                cout<<"Deleted Element:"<<stk.pop();
                break;
            case 3:
                stk.display();
                break;
            default:
                cout<<"\nInvalid choice.";
        }   
    }while(ch!=0);
 
     
    return 0;
     
}
