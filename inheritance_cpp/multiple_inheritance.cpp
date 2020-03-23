//muliple inheritance :(school,qualifiation)->employee
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class school
{
	protected:
	char snm[40];
	public:
		void read()
		{
			cout<<"enter your school name=";
			cin.getline(snm,40);
		}
};
class qualification
{
	protected:
	char degr[40];
	public:
		void read()
		{
			cout<<"enter your highest degree=";
			cin.getline(degr,40);
			
			
		}
};
class employee:public school,public qualification
{
	private:
int ssno;
char name[40];
char dsgn[40];
public:
	void read()
	{
		cout<<"enter your ssno=";
		cin>>ssno;
		cout<<"entr your name=";
		cin.ignore();
		cin.getline(name,40);
		cout<<"enter your designation=";
		cin.ignore();
		cin.getline(dsgn,40);
		school::read();	
		qualification::read();
	}
   void show()
   {
   	cout<<"ssno="<<ssno<<endl;
	cout<<"name="<<name<<endl;
	cout<<"desigantion="<<dsgn<<endl;
	cout<<"degree="<<degr<<endl;
	cout<<"snm="<<snm<<endl;  
	    }
};
int main()
{
	employee e1;
	cout<<"your details are as follows";
	e1.read();
	e1.show();
}
