#include<iostream>

using namespace std;

int main()
{
    int t,r;
    cin>>t>>r;
    if(t+r+(t*r)==111){
        cout << "Yes";
    }

    else
        cout << "No";

    return 0;
}