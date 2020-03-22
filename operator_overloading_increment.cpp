#include<iostream>
#include<conio.h>
using namespace std;
class Distance
{
	private:
		int a;
		int b;
		public:
			Distance(int a1=0,int b1=0):a(a1),b(b1){
				
			}
		Distance operator++()
			{
			++a;
			++b;
			return *this; 
			}
		Distance operator++(int)
		{
			a++;
			b++;
		   return *this;
		}	
		void show()
		{
				cout<<"a="<<a<<" "<<"b="<<b;
		}
};
int main()
{
	Distance d1(10,7),d2(8,6),y;
	cout<<"pre increment";
	cout<<"\n distance before   increment"<<endl;
	d1.show();
	++d1;
	cout<<"distance after increment"<<endl;
	d1.show();
	y=++d1;
	cout<<"value of y increment"<<endl;
	y.show();
	cout<<"value of d1"<<endl;
	d1.show();
	cout<<"post increment"<<endl;
	cout<<"value before increment "<<endl;
	d2.show();
	d2++;
	cout<<"value after increment"<<endl;
	d2.show();
	y=d2++;
	cout<<"value of y "<<endl;
	y.show();
	cout<<"value of d2"<<endl;
	d2.show();	
	return 0;
}
