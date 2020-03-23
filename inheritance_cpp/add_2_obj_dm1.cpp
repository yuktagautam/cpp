#include<iostream>
#include<conio.h>
using namespace std;
class shape
{
	protected:
		int width;
		int breath;
		public:
			void read_data()
			{
					cout<<"enter width and height";
			cin>>width>>breath;	
			}
			
		
};
class rectangle:public shape
{	
	public:
		int area()
		{
			return(width*breath);
		}
};
class triangle:public shape
{
	public:
		int area(){
			return(width*breath/2);
		}
		
};
int main()
{
	rectangle r1;
	triangle t1;
	cout<<"enter rectangle details"<<endl;
	r1.read_data();
	cout<<"enter triangle details"<<endl;
	t1.read_data();
	cout<<"area of rectangle="<<r1.area();
	cout<<"area of triangle="<<t1.area();
	return 0;
}
