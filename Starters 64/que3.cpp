#include<iostream>
 
using namespace std;
 
int main()
{
	int t,n,arr[101];
	cin>>t;
	while(t>0){
	t--;int m =0;
	cin>>n;
	for(int i=0;i<n;i++){
        cin>>arr[i];
        if(m<arr[i]){
        	m=arr[i];
    	}
	}
    cout<<m<<endl;
 }
	return 0;
}
