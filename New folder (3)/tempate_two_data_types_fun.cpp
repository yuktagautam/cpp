#include<iostream>
#include<conio.h>
using namespace std;
template<class dt1,class dt2>
dt2 add(dt1 x,dt2 y) 
{
	dt2 sum;
	
	sum=dt2(x)+y;
	return sum;
}
int main()
{
	cout<<"sum of integer nd float data="<<add(10,20.56)<<endl;
	cout<<"sum of integer nd double data="<<add(20,34.5)<<endl;
	cout<<"su0m of integer int nd long data="<<add(12,34)<<endl;
	return 0;
	
}
