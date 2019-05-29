#include <iostream>

using namespace std;

int main()
{
  int n=0;
  int *p=NULL;
  p=(int*)malloc(sizeof(int));
  *p=10;
  cout<<*p<<endl;
  cin.get();
}


