// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int nthOfSeries(long long int n){
        // code here
        int x=9;
        int y=33;
        int z;
        if (n==1) return x;
        else if (n==2) return y;
        else 
        {
            for(int i=3;i<=n;i++)
                {
                    z=2*y-x+16;
                    x=y;
                    y=z;
                }
            return z;
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthOfSeries(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends