#include<iostream>
#include<conio.h>
using namespace std;
class polygon
{
	protected:
		int width,height;
		public:
			void set_values(int a,int b)
			{
			width=a;
			height=b;
			}
			
			virtual int area()
			{
			}
};
class triangle:public polygon
{
	public:
	int area()
	{
		return(width*height/2);
	}
};
class rectangle:public polygon
{
	public:
	int area()
	{
		return(width*height);
	}
};
int main()
{
	rectangle rect;
	triangle trg;
	//polygon *poly=new rectangle;    //if object is dynamically created
	polygon *poly1,*poly2;
	poly1=&rect;
	poly2=&trg;
	poly1->set_values(4,5);
	poly2->set_values(14,5);
	cout<<"area of rectangle:"<<poly1->area();
	cout<<"area of trianngle:"<<poly2->area();
	getch();
	
	
}
