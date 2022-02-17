// { Driver Code Starts
#include<stdio.h>
void printPat(int n);

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int n;
	scanf("%d",&n);
    printPat(n);
    printf("\n");
	}
}// } Driver Code Ends


/*You are required to complete this method*/
void printPat(int n)
{

    for (int i=n;i>0;i--) //For the outer loop i.e number of lines to be printed which is n.
    {
        for (int j=n; j>0; j--)// for the middle loop i.e count down from n to 1. Counts down from n to 1
        {
            for (int k=1;k<=i;k++)// for the inner loop i.e how any times number should be printed.
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
//Your code here
}
