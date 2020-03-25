//if we don'i use virtual class then we get error
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	public:
		void get()
		{
		}
};
class B:public A
{
	public:
		void show_mpr(){
		}
};
class C:public A
{
	public:
		void show_acr(){
		}
};
class D:public B,public C
{
	public:
		void show()
		{
			
		}
};
int main()
{
	D obj;
	// obj.get();  //error  // as it two copies are there
	 
}
//so to avoid this error we declare virtual class 
//by declaring it get() will not inherit in the succesive base class
//rather then make a virtual base class of D

/*
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	public:
		void get()
		{
		}
};
class B: virtual public A
{
	public:
		void show_mpr(){
		}
};
class C: virtual public A
{
	public:
		void show_acr(){
		}
};
class D:public B,public C
{
	public:
		void show()
		{
			
		}
};
int main()
{
	D obj;
	 obj.get();  //error  // as it two copies are there
	 
}
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	public:
		void get()
		{
		}
};
class B:public A
{
	public:
		void show_mpr(){
		}
};
class C:public A
{
	public:
		void show_acr(){
		}
};
class D:public B,public C
{
	public:
		void show()
		{
			
		}
};
int main()
{
	D obj;
	// obj.get();  //error  // as it two copies are there
	 
}
*/
//this below one will work properly
