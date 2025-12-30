/******************************************************************************

    PROBLEM STATEMENT :- PRODUCT OF ARRAY EXCPECT IT SELF 
   CONSIDER THE ARRAY AS [1,2,3,4] AND RESULT WOLUD BE RESULT_ARRAY[24,12,8,6]

WE ARE USING THE BRUTE FORCE METHOD FOR THIS PROBLEM 

*******************************************************************************/
// JAI SHREE RAM 
#include <stdio.h>
// brute force method 
// FUNCTION TO THE PRODUCT OF ARRAY EXCEPT IT SELF 

int product_of_arr_except_itself(int arr[],int size)
{
    int ans[size];
    
for(int i=0;i<size;i++)
{
    int product=1;
    
    for(int j=0;j<size;j++)
    {
        if(i!=j)
        {
            product*=arr[j];
        }
    }
    ans[i]=product; 
    
    }
    for(int k=0;k<size;k++){
        
        printf("orignal array= %d\n",arr[k]);
        printf("\n");
         printf("product array=%d\n",ans[k]);}
    
}
     
// MAIN FUNCTION
int main()
{
    printf("JAI SHREE RAM\n");
    int arr[]={1,2,3,4};
    int size=4;
   int res= product_of_arr_except_itself(arr,size);

    return 0;
}
