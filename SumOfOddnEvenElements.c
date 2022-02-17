// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
	public:
		vector<int> find_sum(int n)
		{
		    // Code here
		    int sum_odd=0;
		    int sum_even=0;
		    int i;
		    vector<int> sum {0, 0};
		    for (i=1;i<=n;i++){
		        if (i%2==0) sum.at(1)+=i;
		        else sum.at(0)+=i;
		    }
		    return sum;

		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	vector<int> ans = ob.find_sum(n);
    	for(auto i: ans)
    		cout << i << " ";
    	cout<<"\n";
    }
	return 0;
}  // } Driver Code Ends