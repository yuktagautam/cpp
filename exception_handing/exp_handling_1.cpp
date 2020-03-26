//simple exception handling
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
int x,y;
cout<<"enter x and y"<<endl;
cin>>x>>y;
try
{
	if(y==0)
	{
		throw(5);
	}
}
catch(int x)
{
	cout<<"division is not possible because denominator is zero, so taking y=1";
	y=1;
}
cout<<"divison="<<(x/float(y));
return 0;	
}
