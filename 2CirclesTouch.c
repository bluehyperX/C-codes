// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int circleTouch(int X1, int Y1, int R1, int X2, int Y2, int R2) {
        // code here
        double x=pow((X1-X2),2);
		    //printf("%lf\n",x);
		double y=pow((Y1-Y2),2);
		    //printf("%lf\n",y);
		double z=sqrt(x+y);
		    //printf("%d",z);
		double r=R1+R2;
		//printf("%lf %lf\n",z,r);
		return (z<=r)?1:0;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int X1, Y1, R1, X2, Y2, R2;
        cin >> X1 >> Y1 >> R1 >> X2 >> Y2 >> R2;
        Solution ob;
        cout << ob.circleTouch(X1, Y1, R1, X2, Y2, R2) << "\n";
    }
}
  // } Driver Code Ends