//oerator overloading +=
#include<iostream>
#include<conio.h>
using namespace std;
class Distance
{
	private:
		int feet;
		int inches;
		public:
			Distance (int ft=0,int ih=0):feet(ft),inches(ih)
			{}
			void show();
			Distance operator+=(Distance temp);
			
};
Distance Distance::operator+=(Distance temp)
{
	feet+=temp.feet;
	inches+=temp.inches;
	return (*this);
}
void Distance::show()
{
	cout<<" feet= "<<feet<<endl;
	cout<<"inches="<<inches<<endl;
	
}
int main()
{
	Distance d1(10,20),d2(30,40),d3;
	d1.show();
	d2.show();
	d1+=d2;
	d1.show();
	return 0;
	
}
