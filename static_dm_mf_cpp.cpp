//static datamembers and static function
#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
class countobj
{
static int count;
float no;
public:
	countobj(int num):no(num)             // we can not  initialize static  data member in constructor but 
                                          // we can write the write static data member inside it nd perform calculations
	{ cout<<"hello";
		count++;	
	}
	void display()
	{
		cout<<"float value is:"<<no;
	    //cout<<"count current value="<<count;	//1
	}
/*	void display2()                  //2
	{
		cout<<"count value="<<count;
	}*/
	static int tot_obj() //3
	{
		return(count);
	}

	
};
int countobj::count=0;
int main()
{
	countobj q1(10),q2(20),q3(40);
	q1.display();
	q2.display();
	q3.display();
	cout<<"count="<<countobj::tot_obj();  //3
	//q1.display2();   or q2.display2() //2
		
}
