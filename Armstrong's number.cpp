// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends







// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int i=pow((n/100),3);
        int j=pow((n%100)/10,3);
        int k=pow((n%10),3);
        //printf("%d %d %d",i,j,k);
        //int a=i+j+k;
        if ((i+j+k)==n) printf("Yes");
        else printf("No");
    }
};







// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends