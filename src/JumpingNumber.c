// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    long long jumpingNums(long long X) {
        int flag=0;
        long long int i,j,k,a,b;
        for (i=X;i>0;i--)
        {
            a=i;
            A:while (a!=0) //compare last 2 digits and
            {
                j=a%10; //printf("j=%d\n",j);
                a/=10; //printf("a=%d\n",a);
                k=a%10; //printf("k=%d\n",k);

                if (j-k==1||k-j==1)
                {
                    flag=1;
                    //printf("flag=%d",flag);
                    //goto A;
                    continue;
                }
                else if(a==0) break;
                else
                {
                    flag=0;
                    //printf("flag=%d",flag);
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
