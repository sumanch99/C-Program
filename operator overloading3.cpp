#include <iostream>
using namespace std;
class matrix
{
    private:int **m;
    int row,col;
    public:
        void input();
        int operator==(matrix);
        matrix operator+(matrix);
        void output();
};
void matrix::input()
{
    cout<<"\nEnter the no. of rows : ";
    cin>>row;
    cout<<"\nEnter the no. of columns : ";
    cin>>col;
    cout<<"Enter the matrix Row wise :\n";
    m=new int*[row];
    for(int i=0;i<row;i++)
        m[i]=new int[col];
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
        cin>>m[i][j];
}
matrix matrix::operator+(matrix am)
 {
     matrix temp;
      temp.m=new int*[row];
      for(int i=0;i<row;i++)
        temp.m[i]=new int[col];
     for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
        temp.m[i][j]=m[i][j]+am.m[i][j];
     temp.row=row;
     temp.col=col;
     return temp;
 }
 int matrix::operator==(matrix cm)
 {
     if(row==cm.row && col==cm.col)
        return 1;
     return 0;
 }
 void matrix::output()
 {
     for(int i=0;i<row;i++)
     {
        cout<<"\n";
        for(int j=0;j<col;j++)
        cout<<m[i][j]<<" ";
     }
 }
int main()
{
  matrix m1,m2,m;
  m1.input();
  m2.input();
  if(m1==m2)
  {
      m=m1+m2;
      cout<<"\nResultant matrix is";
      m.output();
    }
    else
        cout<<"Input matrices are not of same order";
    return 0;
}
