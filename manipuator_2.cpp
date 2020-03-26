//manipualtors->showbase->octal->hex
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a=30;
	cout<<hex<<a<<endl;
	cout<<showbase<<hex<<a<<endl;             //in hex showbase is default
	cout<<noshowbase<<hex<<a<<endl;
	cout<<"****************"<<endl;
	
	cout<<oct<<a<<endl;
	cout<<showbase<<oct<<a<<endl;             //in hex showbase is default
	cout<<noshowbase<<oct<<a<<endl;
	
	cout<<"*******************"<<endl;
	cout<<dec<<a<<endl;
	cout<<showbase<<dec<<a<<endl;             //in hex showbase is default
	cout<<noshowbase<<dec<<a<<endl;
	cout<<setbase(10)<<a;
	
	
	
	/*howbase of hex=0x
	of dec=nthng
	of oct=0*/
}
