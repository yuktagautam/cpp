#include<iostream>
#include<conio.h>
using namespace std;
class Person
{
	public:
		virtual void fun()=0;
		void f1()                                   //abstract class
		{
			cout<<"person class is running";
		}
};
class student:public Person
{
	public:
	 void fun()
	 {
	 	cout<<"student class is running";
	 }
};
int main()
{
	Person *p;
	student obj;
	p=&obj;
	obj.fun();
	obj.f1();	
}
