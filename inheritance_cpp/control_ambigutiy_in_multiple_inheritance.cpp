#include<iostream>
#include<iomanip>
using namespace std;
class aplha{
	public:
	void show()
	{
		cout<<"aplha constructor is runnning";
	}
};
class beta{
	public:
	void show()
	{
		cout<<"beta constructor is running";
	}
};
class gamma:public beta,public aplha{
	public:
	void show()
	{
			cout<<"gamma constructor";
			beta::show();
			aplha::show();
			
	}

};
int main()
{
gamma g1;
g1.show();
//g1.beta::show();
//g1.aplha::show();
}
