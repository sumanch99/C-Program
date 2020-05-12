#include<iostream>
using namespace std;
#include<string.h>
#define profit 20
#define GST 12
class Medicine{
	float Mrp;
	float price;
	char name[20];
	int quantity;
	public:
	void add_Medicine(char a[20],float p,int q)
	{
		for(int i=0;i<10;i++)
			name[i]=a[i];
		price=p;
		Mrp=((price+(p*GST/100))*q)+(p*profit/100);
		quantity=q;
	}
	void show_Medicine()
	{
		cout<<"\n"<<name<<"\t   "<<quantity<<"\t   "<<Mrp;
	}
};
int main()
{
	int item,i=0,ch,q,n,j;
	char name[20];
	float p;
	Medicine arr[100];
	do{
		cout<<"\n1.Add New Medicine";
		cout<<"\n2.Show the detailed medicines";
		cout<<"\n0.To Exit";
		cout<<"\n\nEnter Your Choice: ";
		cin>>ch;
		switch(ch){
			case 1:cout<<"\nEnter medicine Name: ";
					cin>>name;
					cout<<"\nEnter Medicie Price: ";
					cin>>p;
					cout<<"\nEnter Medicine Quantity: ";
					cin>>q;
					i++;
					n++;
					arr[i].add_Medicine(name,p,q);
					break;
			case 2: cout<<"\n\n*********************Medicine Details*******************";
					cout<<"\nName\tQuantity\tPrice\n";
					for(j=1;j<=n;j++)
						arr[j].show_Medicine();		
					break;
			case 0: cout<<"\nThe End";
					break;
			default:cout<<"\nInvalid Choice";		
		}
	}while(ch);
	return 0;
}
