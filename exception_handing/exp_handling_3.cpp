//exception handling  using classes
#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
class Distance
{
	int feet;
	float inches;
	public:
		class InchesEx
		{
		};                   //empty exception classes
		Distance()
		{
			feet=0;inches=0;
		}
		Distance(int ft,float in)
		{
			if(in>=12)
			{
				 throw InchesEx();
			}
			
			feet=ft;
			inches=in;
		
		}
		void get_distance()
		{
			cout<<"enter feet";
			cin>>feet;
			cout<<"enter inches";
			cin>>inches;
			if(inches>=12)
			{
				throw InchesEx();
			}
		}
		void show_distance()
		{
			cout<<"feet="<<feet<<"inches="<<inches;
		}
};
int main()
{
	try{
		Distance dist1(10,9);
		Distance dist2;
		dist2.get_distance();
		dist1.show_distance();
		dist2.show_distance();
	}
	catch(Distance::InchesEx)
	{
		cout<<"intilization error"<<endl;
	}

	
}
