#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class school
{
protected:
  char snm[40];
public:
   school(char sch[])
{
	strcpy(snm,sch);
	 }	 
};
class qualification
{
	protected:
	char degr[40];
	public:
		qualification(char temp[])
		{
			strcpy(degr,temp);
		}
	
};
class  employee:public school,public qualification
{
	int ssno;
	char dsgn[40];
	char name[40];
	public:
		employee(int sno,char temp[],char sch[],char ds1[],char name1[]):ssno(sno),school(sch),qualification(temp)
		{
			strcpy(dsgn,ds1);
			strcpy(name,name1);
		}
		void display()
		{
			cout<<"ssno="<<ssno<<",dsgn="<<dsgn<<",name"<<name<<",snm="<<snm<<",degr"<<degr;
		}
		
};
int main()
{
	employee e1(123,"btech","geeta nikeetan avasiya","kurukshetra","yukta gautam");
	e1.display();
	return 0;
	
}
