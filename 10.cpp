#include<iostream>
using namespace std;
 
int main()
{
 long int s=0,a;
 cout<<"enter your number:" <<endl;
  cin>>a;
  while(a !=0)
  {
  	s+=a;
   	cin>>a;
  	
  }
  cout<<"sum is"<<s;
return 0;
}
