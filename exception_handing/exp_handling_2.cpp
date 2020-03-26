//mutiple throws in one try
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter value of a,b,c";
	cin>>a>>b>>c;
	try
	{
	if(a==0)
	{
		throw("A");
	}
	if(b==0)
	{
		throw(2);
	}
	if(c==0)
	{
		throw(4.5);
	}

cout<<"a="<<a<<"b="<<b<<"c="<<c;
}

catch(int x)
{cout<<"value of b can not be zero";
}
catch(float x)
{
	cout<<"value of can not be zero";
}
catch(...)
{
	cout<<"value of a can not be zero";
}
}

