/**********************************************************************************************************************************************************

This solution first creates a constructor for Difference class & then saves the argument vector a to vector elements. Then sorts/finds the min & max of the vector element & finds out the absolute difference between the min & max elements of the vector elements. Save the absolute difference in maximumDifference. 


**************************************************************Constructor for class Difference*************************************************************/

Difference(vector<int> a){
     elements=a;
   }
/*********************************************************************************************************************************************************/   

/*****************************************************Solution by sorting the vector (O(nlogn))************************************************************/
    void computeDifference(){
       int n=elements.size();
       sort(&elements[0], &elements[n]);
        maximumDifference=(elements[0]-elements[n-1])<0?-(elements[0]-elements[n-1]):(elements[0]-elements[n-1]);
    }
**********************************************************************************************************************************************************/


/*****************************************************Solution by finding max & min (O(n))****************************************************************/
    void computeDifference(){
        int max=1;
        int min=100;
        int n=elements.size();
        for (int i=0;i<n;i++)
        {
            if (elements[i]<min) min=elements[i];
            if (elements[i]>max) max=elements[i];
        }
        maximumDifference=max-min;
    }
/*********************************************************************************************************************************************************/
