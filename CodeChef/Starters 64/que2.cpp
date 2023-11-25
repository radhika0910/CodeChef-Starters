#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
	int n, t, i;
	string s;
	cin >> t;
	while (t > 0)
	{
    	int check = 0;
    	t--;
    	i = 0;
    	cin >> n;
 
    	cin >> s;
 
    	for (int j = 0; j <= n / 2; j++)
    	{
        	if (s[j] == s[(n/2)+j])
        	{
                check++;
        	}
    	}
            //cout<<check;
    	if (check == (n / 2))
    	{
        	cout << "Yes\n";
    	}
 
    	else
        	cout << "No\n";
	}
	return 0;
}
 
