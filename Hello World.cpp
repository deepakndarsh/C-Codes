#include <iostream>
using namespace std;

int main()
{
int a,b,c;
cout<<"Enter the first number\t";
cin>>a;
cout<<"\nEnter the second number\t";
cin>>b;
a=a+b;
b=a-b;
a=a-b;
cout<<"First number is\t"<<a;
cout<<"\nSecond number is\t"<<b;
cin>>c;
return 0;
}