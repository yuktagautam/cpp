#include<iostream>
#include<iomanip>
using namespace std;
namespace myspace
{
	int a;
	int f1();
	class A
	{
		public:
			void fun1();
	};
}
int myspace::f1()
{
	cout<<"f1 is running";
}
  void myspace::A::fun1()
{
	cout<<"function is running";
}
using namespace myspace;
int main()
{
	int a=5;
	f1();
	A obj;
	obj.fun1();
}
