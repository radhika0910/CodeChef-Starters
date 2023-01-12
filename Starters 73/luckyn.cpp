// Problem
// Chef calls a number lucky if it contains the digit 77 at least once.

// Given a number XX, determine if it is a lucky number or not.

#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0){
    t--;
    int x,no=0;
    cin>>x;
    while(x>0){
         if(x%10==7)
         { 
            cout<<"Yes\n";
            no++;
            break;
         }
         x/=10;
    }

    if(no==0){
        cout<<"No\n";
    }
 }
    return 0;
}