#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int T;
  	ll zc,oc;
	cin >> T;

	while(T--){
		string str;
        cin>>str;
        oc=zc=0;
      
        for(auto &i : str)
        {
          if(i=='0')
            zc++;
          else
            oc++; 
        }
      
        if(oc>zc)
        {
          cout<<1<<"\n";
          continue;
        }
        
        for (int i = 0; i < str.size(); i++)
        {
            if(i==0 && str[i]=='1' && str[i+1]=='0') 
            {
                str[i+1]='2'; 
                zc--;
            }
            else if(i==str.size()-1 && str[i]=='1' && str[i-1]=='0') 
            { 
                str[i-1]='2'; 
                zc--;
            }
            else if(str[i]=='1' && str[i-1]=='0') 
            { 
                str[i-1]='2'; 
                zc--; 
            }
            else if(str[i]=='1' && str[i+1]=='0') 
            { 
                str[i+1]='2'; 
                zc--; 
            }
        }

        if(oc>zc)
          cout<<1<<"\n";
        else if(oc==zc)
          cout<<-1<<"\n";
        else
          cout<<0<<"\n";
	}
	return 0;
}
