//template functon n
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
template<class T>
class mathop
{
	public:
		T add(T var1,T var2);
		T multiply(T var1, T var2);
	
};
template<class T>
T mathop<T>::add(T var1,T var2)
{
	return(var1+var2);
}
template<class T>
T mathop<T>::multiply(T var1,T var2){
	return(var1*var2);
}
int main()
{
	mathop<int>op1;
	mathop<float>op2;
	cout<<"multiplication="<<op1.multiply(10,20)<<endl;
	cout<<"addition="<<op1.add(10,20)<<endl;
	cout<<"multiplication2="<<op2.multiply(10,20)<<endl;
	cout<<"addition2="<<op2.add(10,20)<<endl;
	return 0;
}
