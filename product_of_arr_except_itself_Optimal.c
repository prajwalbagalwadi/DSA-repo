/******************************************************************************

                        

*******************************************************************************/
//JAI SHREE RAM 
#include <stdio.h>
int product_of_arr_except_itself(int arr[],int size)
{
    int ans[size];
    int prefix[size];
    int suffix[size];
    int prod=1;
// calculate the prefix
prefix[0]=1;
for(int i=1;i<size;i++)
{
    prefix[i]=prefix[i-1]*arr[i-1];
}
suffix[size-1]=1;
// calculate the suffix
for(int j=size-2;j>=0;j--)
{
    suffix[j]=suffix[j+1]*arr[j+1];
}
    
    
for(int k=0;k<size;k++)
{
    ans[k]=suffix[k]*prefix[k];
   
}
    for(int l=0;l<size;l++){
        
     printf("%d\n",ans[l]);
        
    }
}








int main()
{
    printf("JAI SHREE RAM\n");
    int arr[]={1,2,3,4};
    int size=4;
    product_of_arr_except_itself(arr,size);

    return 0;
}
