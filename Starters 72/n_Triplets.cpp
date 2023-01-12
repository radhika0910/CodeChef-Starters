#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
   long int n, d=0;
    cin>>n;
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            d++;
            cout<<i<<" "<<n/i<<" "<<1<<endl;
            break;
        }
    
    }
    
    if(d==0)
    cout<<"-1\n";
        
    }
	return 0;
}
