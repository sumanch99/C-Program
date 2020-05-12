#include<iostream>
using namespace std;
class Matrix{
	private:int **m;
			int row,col;
	public: Matrix(){row=col=0,m=NULL;}
			Matrix(int a){row=a,col=a;}
			Matrix(int a,int b){row=a,col=b;}
			void input();
			Matrix operator+(Matrix&);
			void output();
			~Matrix(){}	   
};
void Matrix::input()
{
	cout<<"Enter the matrix Row wise :\n";
	m=new int*[row];
	for(int i=0;i<row;i++)
		m[i]=new int[col];
	for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
        	cin>>m[i][j];	
}
Matrix Matrix::operator+(Matrix &a)
{
	 Matrix temp;
    temp.m=new int*[row];
    for(int i=0;i<row;i++)
        temp.m[i]=new int[col];
    temp.row=row;
    temp.col=col;
    for(int i=0;i<row;i++)
    	for(int j=0;j<col;j++)
    		temp.m[i][j]=m[i][j]+a.m[i][j];
	return temp;    
}
void Matrix::output()
 {
 	cout<<"\nResultant Matrix:";
     for(int i=0;i<row;i++)
     {
        cout<<"\n";
        for(int j=0;j<col;j++)
        	cout<<m[i][j]<<" ";
     }
 }
 int main()
 {
 	Matrix number1(3),number2(4),number;
 	cout<<"\n1st Matrix:";
 	number1.input();
 	cout<<"\n2nd Matrix:";
 	number2.input();
 	number=number1+number2;
 	number.output();
 	return 0;
 }
