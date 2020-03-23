//multilevel inheritance using constructor
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
				marks(int,int,int,int);
				void show_data();
				
};
class result:public marks
{
	protected:
	int per;
	public:
	result(int,int,int,int);
	void percentage();	
};
class grade:public result{
	public:
		grade(int,int,int,int);
		void cal_grade();
};

 grade::grade(int rno,int m11,int m21,int m31):result(rno,m11,m21,m31)
 {
 	cout<<"grade constructor is running";
 }
 result::result(int rno,int m11,int m21,int m31):marks(rno,m11,m21,m31)
 {
 	cout<<"result constructor is running";
 }
 marks::marks(int rno,int m11,int m21,int m31):roll(rno),m1(m11),m2(m21),m3(m31)
 {
 	cout<<"marks constructor is running";
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

	if(per>70&&per<90)
	{
		cout<<"you are just pass";
	}
	if(per>=50&&per<=70)
	{
		cout<<"your grade is B";
	}

	if(per<50)
	{
	 cout<<"you are fail";
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
	grade g1(1,66,78,99);
	g1.show_data();
	g1.percentage();
	g1.cal_grade();
	return 0;
}
