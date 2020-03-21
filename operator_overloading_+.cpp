//operator overloading +
#include<iostream>
#include<conio.h>
using namespace std;
class Distance
{
	private:
		int feet;
		float inches;
		public:
			Distance(int ft=0,float ih=0):feet(ft),inches(ih)
			{
			};
		
		
		Distance operator+(Distance dist2)
		{
			feet=feet+dist2.feet;
			inches=inches+dist2.inches;
			return (*this);
		}
		void show()
			{
				cout<<feet<<"    "<<inches<<endl;
			}
			
};
int main()
{
	Distance d1(7,10.0),d2(5,5.6),d3;
	cout<<" distance1 ";
	d1.show();
	cout<<"distance2 ";
	d2.show();

	  
	  
	  d3=d1+d2;
	  d3.show();
	  
	 getch();
	 
	
}
