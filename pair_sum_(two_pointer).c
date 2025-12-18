/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// JAI SHREE RAM
#include <stdio.h>
// pair sum with two pointer 

int  pair_sum(int arr[],int size, int traget)
{
    int pairsum=0;
    int i=0, j=size-1;
    
    while(i<j)
    {
        pairsum=arr[i] + arr[j];
        
        if(pairsum>traget)
        {
            j--;
        }
        else if(pairsum<traget)
        {
            i++;
        }
        else 
        {
              return printf("%d""-""%d""elements=""ans_Traget=%d",arr[i],arr[j],pairsum);
             // return pairsum;
        }
        
        
        
        
    }
    
}





int main()
{
    printf("JAI SHREE RAM \n");
    int arr[]={2,7,11,15};
   int n=4;
    int traget= 26;
    int res=pair_sum(arr,n,traget);
    // printf("%d",res);
    return 0;
}