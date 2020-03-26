//nested namespace
#include<iostream>
#include<iomanip>
using namespace std;
namespace sample_one
{
	float p=10.34;
	int x=20;
}
namespace sample_two
{
	float q=77.12;
	namespace in_sample_two
	{
		float x=34.56;
		float r=34.724;
		
	}
}
int main()
{
	using namespace sample_one;
	using namespace sample_two;
	using namespace sample_two::in_sample_two;
	cout<<"x="<<in_sample_two::x;
	cout<<"p="<<p;
	cout<<"q="<<q;
	cout<<"r"<<r;
}
