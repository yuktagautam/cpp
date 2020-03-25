#include<iostream>
#include<conio.h>
using namespace std;
class employee
{
	int ssno;
	float salary;
	public:
	 virtual void read()
	{
		cout<<"enter ssno="<<endl;
		cin>>ssno;
		cout<<"enter salary="<<endl;
		cin>>salary;
	}
	 virtual void show()
	{
		cout<<"\nssno="<<ssno<<endl;
		cout<<"\n salary"<<salary<<endl;
	}
};
class teacher:public employee
{
   char spz[25];
   public:
	void read()
	{
	cout<<"enter detail of teacher";
	employee::read();
	cout<<"enter subject specilization=";
	cin>>spz;
	}
	void show()
	{
		cout<<"the detail of teacher"<<endl;
		employee::show();
		cout<<"subject specilizaion=";
		cout<<spz;
	}
};
class engr:public employee
{
	int num;
public:
	void read()
	{
		cout<<" enter details of engeneering:";
		employee::read();
		cout<<"number of projects made= "<<endl;
		cin>>num;
	}
	void show()
	{
		cout<<"details of engiener";
		employee::show();
		cout<<"number of objects done="<<num<<endl;
	}
	
};
int main()
{
	employee *ptr[15];
	char b;
	int i=0,k=0;
	do
	{
		int num=0;
	  cout<<"select one from the given details:"<<endl;
	  cout<<"1.teacher"<<endl;
	  cout<<" 2.engineer"<<endl;
	  cin>>num;
	
	switch(num)
	{
		case 1:
			ptr[i]= new teacher();
			break;
			
		case 2:
			ptr[i]=new engr();
		
		    break;
		
		default:
	        cout<<"invalid selection";
			break;		
	}
	ptr[i]->read();
	i++;
	cout<<"you want to enter more";
	cin>>b;
}
while(b=='y');
while(k<i)
{
	ptr[k]->show();
	k++;
	
}
return 0;
	
}
