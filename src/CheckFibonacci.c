// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string checkFibonacci(int N){
        // code here 
        int x=0,y=1,num;
        while (num<N)
        {
            num=x+y;
            x=y;
            y=num;
            //printf("%d ",num);
        }
        if (num==N) printf("Yes");
        else printf("No");
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.checkFibonacci(N) << endl;
    }
    return 0; 
}   // } Driver Code Ends