#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0){
    t--;
    int j = 0;
    int arr[3];
    for (int i = 0; i < 3;i++){
        cin >> arr[i];

         if(arr[i]==1)
             j++;
        
    }

    if(j>=2){
         cout << "Not now\n";
    }

    else{
         cout << "Water filling time\n";
    }

    j = 0;
 }
    return 0;
}