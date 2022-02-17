// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
	public:
		string is_AutomorphicNumber(int n)
		{
		    // Code here
		    int i,j,sqn;
		    sqn=n*n;
		    A:while (n!=0)
		    {
		        i=n%10;
		        j=sqn%10;
		        //printf("%d %d\n",i,j);
		        if (i==j) 
		        {
		            n/=10;
		            sqn/=10;
		            //printf("%d %d\n",n,sqn);
		            goto A;
		        }
		        else return "Not Automorphic";
		    }
		    return "Automorphic";
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
    	string ans = ob.is_AutomorphicNumber(n);
    	cout << ans <<"\n";
    }
	return 0;
}  // } Driver Code Ends