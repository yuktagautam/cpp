//operator overloading <
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
		
		bool operator<(Distance dist2)           
			{
			  float b1=feet+dist2.feet;
			  float b2=inches+dist2.inches;
			 return(b1<b2)?1:0;
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
	if(d1<d2)
	{
		printf("d1 is less than d2");
	 }
	 else
	 {
	 	printf("d1 is greater than d2");
	  } 
	  
	  
	  
	  
	 getch();
	 
	
}
