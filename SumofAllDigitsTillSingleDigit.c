/***********************************************************************************************************************************************************
Given a number "n" of any no.of digits, this code finds out the sum of all digits till the sum is a single digit number. Ex- 38-> 3 + 8 -> 11 -> 1 + 1 -> 2. 
 In base 10, this is equivalent to taking the **remainder** upon division by 9 (if the remainder!=0) or taking **9** (when remainder==0 except n=0). In case of n=0 the sum is **0**. 

***********************************************************************************************************************************************************/
#include <stdio.h>

int main()
{    
    int n;
    scanf("%d",&n);
    if (n==0) printf("%d",n);
    else printf("%d",(n%9)?n%9:9);
    return 0;
}