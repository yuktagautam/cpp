#include<iostream>
#include<conio.h>
using namespace std;
class shape
{
	protected:
		int width;
		int height;
	public:
	virtual int area()=0;
	shape(int w1,int w2):width(w1),height(w2)
	{
	}
	virtual ~shape()
	{
		cout<<"base class destructor is running";
	}
};
class rectangle:public shape
{
	public:
	rectangle(int w1,int w2):shape(w1,w2)
	{
	}
	int area()
	{
		return(width*height);
	}
	~rectangle()
	{
		cout<<"derived class rec is runnning";
	}
};
class triangle:public shape
{
	public:
	triangle(int w1,int w2):shape(w1,w2)
	{
	}
	int area()
	{
		return(width*height/2);
	}
	~triangle()
	{
		cout<<"derived class running";
	}
	
};
int main()
{
	shape *p,*p1;
	p=new rectangle(10,20);
	p1=new triangle(20,30);
cout<<"rectangle area="<<p->area();
cout<<"triangle area="<<p1->area();
	return 0;	
}
