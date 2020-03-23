
#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
class box
{
	int no;
	public:
		box(int num):no(num)
		{
			cout<<" run constructor is running";
		}
		~box()
		{
	  cout<<"destructor is running";	                 // no argumnts can be passed to destructor
        }
        void display()
        {
        	cout<<"box is running";
		}
};
int main()
{
	box b(23),c(55);
	b.display();
	c.display();
	}
	
