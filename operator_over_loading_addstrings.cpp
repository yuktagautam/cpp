//operator overrloading adding strings
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class STRING
{
	char str[100];
	public:
	STRING()
	{
		strcpy(str," ");
	}
	STRING(char st1[])
	{
		strcpy(str,st1);
	}
STRING operator+(STRING stemp)
	{
		strcat(str,stemp.str);
		return(*this);
	}
	void show()
	{
		cout<<"word="<<str;
	}
};
int main()
{
	STRING s1("hello"),s2("madam"),s3;
	s3=s1+" "+s2+"ji";
	s3.show();
}
