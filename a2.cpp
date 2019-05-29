#include <iostream>
#include <stdlib.h>
#include <time.h>

#define DMAX 100

using namespace std;

int main()
{
  int a[DMAX],n;
  //for(int i=0;i<100;i++)
  //{cout<<i<<' ';}
  srand((int)time(NULL));
  for(int i=0;i<DMAX;i++)
  {
    a[i]=rand()%100;
  }
  for(int i=0;i<DMAX;i++)
  {cout<<a[i]<<' ';}
  cout<<endl;
  return 0;
}



