#include <iostream>

using namespace std;

int main()
{
 int n=0,z=0;
 cout<<"Please input n:";cin>>n;
 n=n%2?--n:n;
 for(int i=1;i<=n/2;i++)
 {
   z=n-i;

   for(int k=0;k<(int)(n/2)-i;k++) cout<<' ';
   for(int j=1;j<=(n-z-1)+i;j++) cout<<'*';
   //for(int j=0;j<z*2-1;j++) cout<<'*';
   cout<<endl;
 }
 for(int i=1;i<n/2;i++)
 {
  for(int k=1;k<=i;k++) cout<<' ';
  z=n-i;
  for(int j=1;j<=z-i-1;j++) cout<<'*';
  cout<<endl;
 }
}


