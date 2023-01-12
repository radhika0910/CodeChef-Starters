#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--){
    	int x;
    	cin>>x;
    	int kkj[x];
    	for(int i=0;i<x;i++){
    	cin>>kkj[i];
    	}
    	int i=0,flag=0;
    	if(kkj[i]==kkj[x-1])
        cout<<"YES"<<"\n";
    	else{
    	for(int i=0;i<x-1;i++)
    	{
            if(kkj[i]==kkj[0]&&kkj[i+1]==kkj[x-1])
        	{
        	flag=1;
        	break;
        	}
        	}
        	if(flag==1)
            cout<<"YES"<<"\n";
        	else
            cout<<"NO"<<"\n";
    	}
	}
    	return 0;
	}
 
 
 
 
 
 
