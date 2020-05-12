#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#define min 1000
#define service_charge 100
using namespace std;

class account
{
	protected:char name[20];
			  int account_number;
			  char account_type;
	public:void create_account(char x)
			{
				account_type=x;
				cout<<"\nEnter name:";
				gets(name);
				cout<<"\nEnter account number:";
				cin>>account_number;
			 }		  
};

class current_account:public account
{
	protected:float balance;
	public: void deposit_c(float x);
			void withdrawl_c(float y);
			void display_balance_c();
			void compute_penalty_c();
	
};
void current_account::deposit_c(float x)
{
	balance+=x;
}
void current_account::withdrawl_c(float y)
{
	if(y>balance)
		cout<<"\nYou don't have enough balance to withdrawl.\nYour balace is "<<balance<<" Rs.";
	else
		{
			balance-=y;
			cout<<"\nTransaction Successful";
			if(balance<min)
				cout<<"\nYour balance is less than the minimum balance.Please maintain minimum balance else balance will get deducted as per "<<service_charge<<"Rs. per check in";
			}	
}
void current_account::display_balance_c()
{
	cout<<"\nYour Account Balance is:"<<balance<<"Rs.";
}
void current_account::compute_penalty_c()
{
	if(balance<min)
		balance-=service_charge;
}

class savings_account:public account
{
protected: float balance;
public: void deposit_s(float x);
		void withdrawl_s(float y);
		void display_balance_s();	
}; 
void savings_account::deposit_s(float x)
{
	balance+=x;
}
void savings_account::withdrawl_s(float y)
{
	if(y>balance)
		cout<<"\nYou don't have enough balance to withdrawl.\nYour balace is "<<balance<<" Rs.";
	else
		{
			balance-=y;
			cout<<"\nTransaction Successful";
			}	
}
void savings_account::display_balance_s()
{
	cout<<"\nYour Account Balance is:"<<balance<<"Rs.";
}
int main()
{
	int ch;
	float amount;
	cout<<"\n\t\tWelcome to sch Bank";
	cout<<"\nEnter any key to continue";
	getch();
	system("CLS");
	current_account user;
	user.create_account('c');		 	 
	do{
		cout<<"\n1.Display balance";
		cout<<"\n2.Cash withdrawl";
		cout<<"\n3.Cash deposit";
		cout<<"\n0.To Exit";
		cout<<"\n\n\t\tYour Choice:";
		cin>>ch;
		switch(ch){
			case 1 : user.display_balance_c();
					 break;
			case 2 : cout<<"\nEnter amount:";
					 cin>>amount;
					 user.withdrawl_c(amount);
					 user.compute_penalty_c();
					 break;
			case 3 : cout<<"\nEnter amount:";
					 cin>>amount;
					 user.deposit_c(amount);
					 break;
			case 0 : cout<<"\nThe End";
					 break;		 		 		 
			default: cout<<"\nWrong choice";	 
		}	
	}while(ch);
	return 0;
}
