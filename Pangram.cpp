// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

bool kPangram(string str, int k);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin.ignore();
        string str;
        getline(cin,str);
        int k;
        cin>>k;
        cout<<kPangram(str,k)<<endl;
    }
    return 0;
}// } Driver Code Ends


bool kPangram(string str, int k)
{
    // code here 
    unordered_map<char,int> mark;
    int count=0;
    int n=0;
    for (int i=0;i<str.length();i++)
    {
        //if ('A'<=str[i] && str[i]<='Z') index=str[i]-'A';
        char ch=str[i];
        if ('a'<=str[i] && str[i]<='z') 
        {
            mark[ch]++;
            count++;
        }
    }
    n=26-mark.size();
    if (count>=26 && n<=k) return true;
    else return false;
}