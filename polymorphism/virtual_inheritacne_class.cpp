#include<iostream>
using namespace std;
class Grandpa{
	protected:
		int base;
		public:
			void get_data()
			{
				cout<<"enter data for base data member";
				cin>>base;
			}
};
class mpr:virtual public Grandpa
{
	public:
		void show_mpr()
		{
			cout<<"show function is running";		}
};
class fpr:virtual public Grandpa
{
	public:
		void show_fpr()
		{
			cout<<"show fpr is running";
		}
};
class child:public mpr,public fpr
{
	public:
		void show()
		{
			cout<<"base="<<base;
		}
};
int main()
{
	child ch;
	ch.get_data();
	ch.show_fpr();
	ch.show_mpr();
	
	}
