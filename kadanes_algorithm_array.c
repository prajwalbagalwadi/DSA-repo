/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

/*******************************************************************************/
/*
This is kadanens_algorthim for sum of sub array so


NOTE: To find Total number of sub array follow this fromual 

n*(n+1)/2
where the n is the  number of element in array or size of array 


  */



// JAI SHREE RAM
#include <stdio.h>
int max(int a,int b)
{
    return (a>b)?a:b;
}
int kadanens_algo(int arr[],int size)
{
    int max_sum=0; int curr_sum=0;
    
    for(int st=0;st<size;st++)
    {
       
        curr_sum+=arr[st];
        max_sum=max(curr_sum,max_sum);
        if(curr_sum<0)
        {
            curr_sum=0;
        }
          

    }
    return max_sum;

}


int main()
{
    
    printf("JAI SHREE RAM\n");
    int arr[]={3,-4,5,4,-1,7,-8};
   int  n=sizeof(arr)/sizeof(arr[0]);
    int res;
    res=kadanens_algo(arr,n);
    printf(" %d=kadanens_algo max sum",res);

    return 0;

}
