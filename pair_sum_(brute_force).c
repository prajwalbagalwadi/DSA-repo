/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// JAI SHREE RAM 
#include <stdio.h>

int pair_sum(int arr[],int size,int target)

{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            ans=arr[i]+arr[j];
            if(ans==target)
            {
                printf("%d""-""%d""elements=""ans_Traget=%d",arr[i],arr[j],ans);
            }
           
        }
    
         
    }   
   
    
}







int main()
{
    printf("JAI SHREE RAM\n");
    int arr[]={2,7,11,15};
   int n=4;
    int traget= 18;
    int res=pair_sum(arr,n,traget);
   // printf("%d",res);
    return 0;
}