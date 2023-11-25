// // Written By Radhika Bhoyar 
// Problem
// Chef is playing Ludo. According to the rules of Ludo, a player can enter a new token into the play only when he rolls a 66 on the die.

// In the current turn, Chef rolled the number XX on the die. Determine if Chef can enter a new token into the play in the current turn or not.
#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0){
    t--;
    int a;
    cin>>a;
    if(a==6)
    cout<<"Yes\n";
    else
    cout<<"No\n";
 }
    return 0;
}