// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    long long jumpingNums(long long X) {
        // code here
        int j,k,flag=0;
        for (long long i=X;i>0;i--)
        {
            long long a=i;
            while (a!=0)
            {
             j=a%10;
             a/=10;
             k=a%10;

             if (j-k==1||k-j==1)
             {
                 flag=1;
                 continue;
             }
             else if (a==0) break;
             else
             {
                 flag=0;
                 break;
             }
            }
            if (flag==0) continue;
            else return i;
        }

    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;

        cin>>X;

        Solution ob;
        cout << ob.jumpingNums(X) << endl;
    }
    return 0;
}  // } Driver Code Ends
