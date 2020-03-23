//inhetritance using default constructor and destructor
#include<iostream>
#include<conio.h>
using namespace std;
class alpha
{
public:
alpha()
{
	cout<<"alpha constructor is running";
	
	}
	~alpha()
	{
		cout<<"alpha destructor is running";
		}	
};

class beta:public alpha
{
public:
	beta()
	{
		cout<<"beta constructor is running";
	}
	~beta()
	{
		cout<<"beta destructor is running"; 
	}
};
int main()
{
	beta b1,b2;
	getch();
}
