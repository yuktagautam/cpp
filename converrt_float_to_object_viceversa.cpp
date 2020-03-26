#include<iostream>
#include<iomanip>
using namespace std;
class Money
{
	int rn;
	int ps;
	public:
		Money(float amt_in_float)
		{
			rn=int(amt_in_float);
			ps=(amt_in_float-rn)*100;
		}
		Money(int rn1=0,int ps1=0):rn(rn1),ps(ps1)
		{
		}
		void display() const
		{
			cout<<"rupess="<<rn<<endl;
			cout<<"paise="<<ps;
		}
	operator float()
{
	float rup_fract=float(ps)/100;
	rup_fract+=rn;
	return rup_fract;
}
};

int main()
{
	Money m1(50,75),m2;
	float amt1=23.57,amt2;
	amt2=float(m1);
	cout<<"amount2(convert rs& paise to float amt"<<amt2<<endl;
	m2=Money(amt1);
	cout<<"convert that float value to rs and paise"<<endl;
	m2.display();
	
}
