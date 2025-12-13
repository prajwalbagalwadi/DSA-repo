/*
This is kadanens_algorthim for sum of sub array so


NOTE: To find Total number of sub array follow this fromual 

n*(n+1)/2
where the n is the  number of element in array or size of array 


  */



// JAI SHREE RAM

#include <stdio.h>
// Function to find max out of two valve 
int max(int a,int b)
{
    return (a>b)?a:b;
}
// Implementation of Kadanens alogorthim 
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

// main function 
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


