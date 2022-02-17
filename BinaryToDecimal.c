// { Driver Code Starts
//Initial Template for C

#include<stdio.h>


 // } Driver Code Ends
//User function Template for C

int binary_to_decimal(char str[])
{
		    // Code here.
		    int i=0,count=0,num=0;
		    while (str[i])
		    {
		        count++;
		        i++;
		    }
		    //return str[(count-1)-i];
		    for (i=0;i<count;i++)
		    {
		        if (str[i]=='1') num+=pow(2,count-(i+1));
		        //printf("%d\n",num;
		    }
		    return num;
}

// { Driver Code Starts.

int main(){
    int T;
    scanf("%d", &T);
    while(T--)
    {
    	char str[10000];
    	scanf("%s", &str);
    	int  ans = binary_to_decimal(str);
    	printf("%d\n", ans);
    }
	return 0;
}  // } Driver Code Ends
