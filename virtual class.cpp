#include <iostream>
#include<string.h>
using namespace std;
class Student
{
	protected:int roll;
			  char name[20];
	public:	void set_roll(int r)
			{
				roll=r;
			}
			void set_name(char *n)
			{
				strcpy(name,n);
			}
			void put_info()
			{
				cout<<"\nName: "<<name<<"\nRoll Number: "<<roll;
			}
};

class Test : virtual public Student
{
	protected: float subject1,subject2;
	public: void set_marks(float a,float b)
			{
				subject1=a,subject2=b;	
			}	
			void put_marks()
			{
				cout<<"\nMarks in \nSubject 1 = "<<subject1<<"\tSubject 2 = "<<subject2;
			}
};

class Sports : public virtual Student
{
	protected: int score;
	public: void set_score(float s)
			{
				score=s;
			}
			void put_score()
			{
				cout<<"\nSports score: "<<score;
			}
};

class Result:public Test,public Sports
{
	protected: float total;
	public: 
			void put_total()
			{
				total=subject1+subject2+score;
				cout<<"\nTotal Marks obtained: "<<total;
			}
			void total_marks()
			{
				put_info();
				put_marks();
				put_score();
				put_total();
			}
};

int main()
{
	float a,b;
	char s[20];
	Result x;
	cout<<"\nEnter name of student:";
	gets(s);
	cout<<"\nEnter roll number:";
	cin>>a;
	x.set_roll(a);
	x.set_name(s);
	cout<<"\nMarks in sub1 & sub2:";
	cin>>a>>b;
	x.set_marks(a,b);
	cout<<"\nScore in sports:";
	cin>>a;
	x.set_score(a);
	cout<<"\nTotal Result:";
	x.total_marks();
}
