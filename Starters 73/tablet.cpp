// // Written By Radhika Bhoyar 
// Problem
// The doctor prescribed Chef to take a multivitamin tablet 33 times a day for the next XX days.

// Chef already has YY multivitamin tablets.

// Determine if Chef has enough tablets for these XX days or not.

#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0){
    t--;
    int x,y;
    cin>>x>>y;
    if(3*x<=y)
    cout<<"Yes\n";
    else
    cout<<"No\n";
 }
    return 0;
}