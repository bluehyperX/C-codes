// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> getTable(int N)
    {
        // Write Your Code here
        vector<int> num(1,N);
        for (int i=2;i<=10;i++)
        {
            num.push_back(i*N);
        }
        return num;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> ans = ob.getTable(N);
        for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends