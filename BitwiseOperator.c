#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int aa,ao,ax,ma=0,mo=0,mx=0;
  for (int i=1;i<n;i++)
  {
	for (int j=i+1;j<=n;j++)
	{
		aa=i&j;
		if (aa>ma&&aa<k) ma=aa;
		ao=i|j;
		if (ao>mo&&ao<k) mo=ao;
		ax=i^j;
		if (ax>mx&&ax<k) mx=ax;
	}
  printf("%d\n%d\n%d",ma,mo,mx);
  }

int main()
{
    int n,k;  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
