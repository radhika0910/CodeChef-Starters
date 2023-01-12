#include <bits/stdc++.h>
using namespace std;
 
void solve(){
 	int n;
  	cin>>n;
  	vector<int>arr(n);
  	for(int i=0;i<n;i++)
   	cin>>arr[i];
  	sort(arr.begin(),arr.end());
  	bool flag = 1;
  	for(int i=0;i<n;i++){
   	if(arr[i] != arr[i+1]){
     	flag = 0;
     	break;
   	}
  	}
 	if(flag == 1){
  	cout<<0<<endl;
  	return;
 	}    
 	int count = 0;
 	for(int i=1;i<n;i++){
     	if(arr[i] % arr[0] == 0 && arr[i] != arr[0])
     	count++;
     	else if(arr[i] % arr[0] != 0){
          	cout<<n<<endl;
          	return;
     	}
 	}
 	cout<<count<<endl;
}
 
int main() {
	int t;
	cin>>t;
	while(t--){
   	solve();
	}
	return 0;
}
 
 
