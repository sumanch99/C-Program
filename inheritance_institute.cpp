#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class staff
{
protected: int code;
		   char name[20];
public: void create_staff()
		{
			fflush(stdin);
			cout<<"\nEnter name:";
			gets(name);
			cout<<"\nEnter code:";
			cin>>code;
		}		   	
};

class teacher:public staff
{
protected: char subject[20],publication[20];
			float salary;
public: void create_teacher()
		{
			fflush(stdin);
			cout<<"\nEnter Subject:";
			gets(subject);
			fflush(stdin);
			cout<<"\nEnter publication:";
			gets(publication);
			cout<<"\nEnter salary:";
			cin>>salary;
		}				
		void show_teacher_details()
		{
			cout<<"\nName:"<<name<<"\ncode: "<<code<<"\nSubject: "<<subject<<"\nPublication: "<<publication<<"\nSalary: "<<salary;
		}
};
class officer:public staff
{
	protected:char grade[20];
			  float salary;
	public: void create_officer()
			{
				fflush(stdin);
				cout<<"\nEnter grade:";
				gets(grade);
				cout<<"\nEnter salary:";
				cin>>salary;
		    }
			void show_oficer_details()
			{
				cout<<"\nName:"<<name<<"\ncode: "<<code<<"\nGrade: "<<grade<<"\nSalary: "<<salary;
			}		  
};
class typist:public staff
{
	protected:float speed;
	public:void create_typist()
			{
				cout<<"\nEnter speed in w/s:";
				cin>>speed;
			}	
};
class regular:public typist
{
	protected: float salary;
	public: void set_salary(int s)
			{
				salary=s;	
			}
			void show_typist_details_r()
			{
				cout<<"\nName:"<<name<<"\ncode: "<<code<<"\nSpeed: "<<speed<<"\nSalary: "<<salary;
			}	
};
class casual:public typist
{
	protected: float wage;
	public: void set_wage(int w)
			{
				wage=w;
			}
			void show_typist_details_c()
			{
				cout<<"\nName:"<<name<<"\ncode: "<<code<<"\nSpeed: "<<speed<<"\nWage: "<<wage;
			}
};

int main()
{
	int ch;
	do{
		cout<<"\n1.Teacher\n2.Regular Typist\n3.Casual Typist\n4.Officer\n0.To Exit\n\nEnter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1: teacher user1;
				    user1.create_staff();
                    user1.create_teacher();
                    cout<<"\nStaff created.";
                    cout<<"\nDETAILS\n";
                    user1.show_teacher_details();
                    break;
            case 2: regular user2;   
				    user2.create_staff();
					user2.create_typist();
					user2.set_salary(5000);
					cout<<"\nDETAILS\n";
					user2.show_typist_details_r();
					break;    
			case 3:	casual user3;	
					user3.create_staff();
					user3.create_typist();
					user3.set_wage(700);
					cout<<"\nDETAILS\n";
					user3.show_typist_details_c();
					break;
			case 4:	officer user4;
					user4.create_staff();
					user4.create_officer();
					cout<<"\nDETAILS\n";
					user4.show_oficer_details();					
					break;
			case 0:	cout<<"\nThe End.";
					break;
			default:cout<<"\nWrong choice";				
		}
	}while(ch);

return 0;
}
