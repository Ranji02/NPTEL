#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int C,D,L,minimum,maximum;
        cin>>C>>D>>L;
        minimum = D*4 + max(0,(C-2*D)*4);
        maximum = (D+C)*4;
        if(L >= minimum && L <= maximum && L%4==0)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}


