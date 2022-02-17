// { Driver Code Starts
#include <stdio.h>

 // } Driver Code Ends

void printFloydTriangle(int N)
{
   //Write your code here
   int i,j,k=1;
   for (i=0;i<N;i++){
       for (j=0;j<=i;j++){
         printf("%d ",k);
         k++;
       }
       printf("\n");
   } 
}


// { Driver Code Starts.
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int N;
        scanf("%d",&N);
        printFloydTriangle(N);
    }
    return 0;
}  // } Driver Code Ends