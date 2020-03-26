//namespace 
//namespace is just a colllection of declarations pr defiantions //it's object can not be created
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
namespace myspace1
{
	int value=5;
}
namespace myspace2
{
	double value=3.1416;
}
int  main()
{
	cout<<"namespace_ist value"<<myspace1::value<<endl;
	cout<<"namespace_2nd value"<<myspace2::value<<endl;
	using namespace myspace2;
	cout<<"namespace_ist value="<<myspace1::value<<endl;
	cout<<"namespace_2nd value="<<value<<endl;
	getch();
}
