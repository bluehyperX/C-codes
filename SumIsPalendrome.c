// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int N) {
        // code here
        int i,j,a,b;
        while (N!=0){
            i=N%10;
            j+=i;
            N/=10;
        }
        N=j;
        while (N!=0){
            a=N%10;
            b=b*10+a;
            N/=10;
        }    
        return (b==j?1:0);    
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}
  // } Driver Code Ends