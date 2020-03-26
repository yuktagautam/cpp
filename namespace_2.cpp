#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
namespace avar1
{
	int a=20;
	void display()
	{
		cout<<"a="<<a<<endl;
	}
}
namespace avar2
{
	int a=12;
	void display()
	{
		cout<<"a="<<a<<endl;
	}
}
int main()
{
//	display(); error
avar1::display();
avar2::display();
return 0;

	
}
