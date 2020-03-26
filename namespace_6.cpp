#include<iostream>
#include<iomanip>
using namespace std;
namespace myspace
{
	int a;
	void f1();
	class Hello
	{
		public:
			void hello()
			{
				cout<<"hello";
			}	
	};
}
void myspace::f1()
{
	cout<<"in f1";
}
int main()
{
	myspace::a=5;
	myspace::Hello obj;
	obj.hello();
	myspace::f1(); 
}
