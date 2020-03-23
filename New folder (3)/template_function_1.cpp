//tempate function
#include<iostream>
#include<conio.h>
using namespace std;
template<class T>
T abs(T n)
{
	return(n<0)?-n:n;
}
int main()
{
	int int1=-5;
	float apl=0.456;
	double apk=995;
	cout<<"abs of int="<<abs(int1);
	cout<<"apl of float="<<abs(apl);
	cout<<"apk of double="<<abs(apk);
	return 0;
}
