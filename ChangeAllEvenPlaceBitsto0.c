// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int convertEvenBitToZero(long long int n) {
        // code here
        /*
        Given a number N, change all bits at even positions to 0.
        Example 1:
        Input: N = 30
        Output: 10 
        Explanation: Binary representation of 11110. Bits at Even positions are 
        highlighted. After making all of them 0, we get 01010. Hence the answer is 10.
        */
        return n&0xAAAAAAAA;
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
        cout << ob.convertEvenBitToZero(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends