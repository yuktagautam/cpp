//if declare another namespace with same name then we are extended 
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
namespace aplha
{
	int a=10;
	void f1()
	{
		cout<<"f1 is woring";
	}
}
namespace aplha
{
	int a=10;
	void f2()
	{
		cout<<"f2 is working";
	}
}
int main()
{
	using namespace aplha;
	f1();
	f2();
	
}

