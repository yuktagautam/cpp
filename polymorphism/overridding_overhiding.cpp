//overriding function and over hiding
//overhiding->happens in ineritance and differnent classes
//overridding->when name is all thing are same but different definatiions
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	public:
		void f1()
		{
			cout<<"hi";
		}
		void f2()
		{
			cout<<"goodmrng";
		}
};
class B:public A
{
	public:
		void f1()        //overriding
		{
			cout<<"hello";
		}
		                         
		void f2(int x)          //overhiding
		{
			cout<<"good night";
		}
		
		             
};

int main()
{
	B obj;
	obj.f1();   //as obj type is B so ist cursor goes to b class but if the required function is not present the it will go to the parent class otherwise not
//	obj.f2();   //error  //here f2 is present so don't go to parent class but show error because no such type of function found becozof differnt argument
	obj.f2(4);   
}

	

