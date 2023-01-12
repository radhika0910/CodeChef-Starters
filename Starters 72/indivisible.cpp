#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0){
    t--;
    int a,b,c;
    cin>>a>>b>>c;
    int i=0;
    for(i=2;i<101;i++){
        if(a%i!=0 && b%i!=0 && c%i!=0){
       break;
        }
    }
    cout<<i<<endl;
 }
    return 0;
}
