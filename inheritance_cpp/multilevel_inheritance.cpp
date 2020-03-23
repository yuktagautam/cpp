//mutltilevel inheritance ---marks->result->grade with taking values from user "wihout constructor"
#include<iostream>
#include<conio.h>
using namespace std;
class marks
{
	private:
		int roll;
		protected:
			int m1;
			int m2;
			int m3;
			public:
				void get_data();
				void show_data();
};
class result:public marks
{
	protected:
	int per;
	public:
	void percentage();	
};
class grade:public result{
	public:
		void cal_grade();
};
void marks::get_data()
{
	cout<<"enter roll_no";
	cin>>roll;
	cout<<"engish marks=";
	cin>>m1;
		cout<<"maths marks=";
	cin>>m2;
		cout<<"science marks=";
	cin>>m3;
	
}

void result::percentage()
{
	per=(m1+m2+m3)/3;
	cout<<"percentage= "<<per<<endl;
}
void grade::cal_grade()
{
	if(per>90)
	{
		cout<<"your grade is A++";
	}
	if(per>=50&&per<=70)
	{
		cout<<"your grade is B";
	}
	if(per<50)
	{
	 cout<<"you are fail";
	}
	if(per>70&&per<90)
	{
		cout<<"you are just pass";
	}
	
}
void marks::show_data()
{
	cout<<"roll_no="<<roll<<endl;
	cout<<"english="<<m1<<endl;
	cout<<"maths="<<m2<<endl;
	cout<<"science="<<m3<<endl;
}
int main()
{
	grade g1;
	g1.get_data();
	g1.show_data();
	g1.percentage();
	g1.cal_grade();
	return 0;
}
