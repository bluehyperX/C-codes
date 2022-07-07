/***********************************************************************************************************************************************************
for every element to be printed, find the minimum distance from all the sides and then substract the minimum distance from n. 
***********************************************************************************************************************************************************/ 
int main() 
{
int n;
scanf("%d", &n);
int len = 2*n-1;
int min1,min2,min; // Complete the code to print the pattern.
// for rows
for (int i=1; i <=len; i++) 
 {
   // for col
   for (int j=1; j<=len; j++) 
   {
       // min from top or bottom sides
       min1 = i<=len-i ? i -1 : len-i;

       // min from left or right sides
       min2 = j<=len-j ? j -1: len-j;

       // min from all the sides
       min = min1<=min2 ? min1 : min2;

       // print  
       printf("%d ",n-min);
   }
   printf("\n");
 }
return 0;
}
