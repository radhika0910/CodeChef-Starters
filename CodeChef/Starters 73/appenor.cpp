// Problem
// Chef has an array AA of length NN.

// Chef wants to append a non-negative integer XX to the array AA such that the bitwise OR of the entire array becomes = Y=Y i.e. (A_1 \ | \ A_2 \ | \ \ldots \ | \ A_N \ | \ X) = Y(A 
// 1
// ​
//   ∣ A 
// 2
// ​
//   ∣ … ∣ A 
// N
// ​
//   ∣ X)=Y. (Here, |∣ denotes the bitwise OR operation)

// Determine the minimum possible value of XX. If no possible value of XX exists, output -1−1.

#include <iostream>
using namespace std;

int main() {
	
	int a, b, c, t;
	
	cin >> t;
	while(t--)
	{
	    cin >> a >> b;
	    long arr[a], OR = 0;
	    bool flag = false;
	    
	    for (int i = 0; i < a; i++)
	    {
	        cin >> arr[i];
	        OR = OR |arr[i];
	    }
	    for (int j = 0; j <= b; j++)
	    {
	        if ((OR|j) == b){
	            cout << j << endl;
	            flag = true;
	            break;
	        }
	    }
	    if (!flag){
	        cout << "-1 \n";
	    }
	    
	   // cout << a << "->" << b << endl;
	}
	return 0;
}