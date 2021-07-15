#include <iostream>  
using namespace std;  
int main() {  
  int i1=0,i2=1,i3,i,number,j;    
 cout<<"Number of elements: ";    
 cin>>number;    
 cout<<i1<<" "<<i2<<" ";     
 for(i=2;i<number;++i)     
 {    
  i3=i1+i2;    
  cout<<i3<<" ";    
  i1=i2;    
  i2=i3;    
 }    
	cin>>j;
   return 0;  
   }