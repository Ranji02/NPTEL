#include<iostream>

using namespace std;

int main()
{
  int T;
  cin>>T;
  for(int i=0;i<T;i++)
  {
    int N,X;
    cin>>N>>X;
    int max=0;
    for(int j=1;j<=X;j++)
    {
      if(N%j>max)
      {
        max=N%j;
      }
    }
    cout<<max<<endl;
  }
  return 0;
}
