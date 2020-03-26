#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
double a=31.14592;
double b=2006.000;
double c=1.0e-10;
cout<<"manipulaors";
cout<<"a="<<a<<endl;      //the value which is printed is according to the complier
cout<<setprecision(5)<<a<<endl;  //setprecision just count the numbers from start upto the given number written in a bracket nd also do rounoff 
cout<<setw(15)<<left<<a<<endl;
cout<<fixed<<setprecision(5)<<a<<endl;            //setprecision with fixed work same but start to count after decimal
cout<<setprecision(5)<<fixed<<a<<endl;   //no specific initilization
cout<<right<<setw(15)<<a<<endl;  
cout<<scientific<<a<<endl;
cout<<setw(15)<<a<<endl;
cout<<setw(15)<<setfill('*')<<a<<endl;




//this set take the current value of variable even by seeing it was initally right or left 
//nd by default it is right,means the number wolud be left side


cout<<"**************************";

cout<<"for b"<<endl;
cout<<"b="<<b<<endl;
cout<<setprecision(5)<<b<<endl;
cout<<fixed<<setprecision(5)<<b<<endl;
cout<<setprecision(5)<<fixed<<b<<endl;
cout<<scientific<<b;
cout<<setw(15)<<b<<endl;



cout<<"c="<<b<<endl;
cout<<setprecision(5)<<c<<endl;
cout<<fixed<<setprecision(5)<<c<<endl;
cout<<setprecision(5)<<fixed<<c<<endl;
cout<<scientific<<c;
cout<<setw(15)<<c<<endl;
}
