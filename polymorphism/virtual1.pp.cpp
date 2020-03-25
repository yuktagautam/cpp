//use of virtual in overriding
//the function which is declared as virtual , late binding occur,p will be assign at work time
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	public:
	virtual void show()
	{
		cout<<"hello";
	}
};
class B:public A
{
	public:
	void show()
	{
		cout<<"hi";
	}
	
};
int main()
{
	A *p,obj1;
	B obj2;
	p=&obj2;
	p->show();  //virtual->latebinding->depends on address,->address =obj2,->goes to show of  B
	//but if there is no show then B->A then show of A will execute 
	
	
}
