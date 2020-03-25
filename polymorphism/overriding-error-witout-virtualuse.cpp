//we make pointer of parent class and hold address of child class but viceversa is not true
//if overriding occur then in case of pointer there are two options
//ist one->early binidng
//2nd one->late binding
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	public:
	void show()
	{
		cout<<"class A show is working";
	}
};
class B:public A{
	public:
void show()
{
	cout<<"class B how is working";
}
};
int main()
{
	A *p,obj1;
	B obj3;
	p =&obj3; // a simple pointer hold it's address of it's type but here is different one
	//d=obj1   //error //can not happen
	p->show();  // here i want to execute class b show(),but class A show() will execute 
	//because earlybinding occur done at compilation tym so at p datatype is stored which is of A .
	//that's why it will access to show() of A
	// hence we need a virtual class
}
