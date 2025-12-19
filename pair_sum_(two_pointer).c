/******************************************************************************

    This program is to find the pair of sum to match the traget value with two pointer approch 

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



// main function 

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

