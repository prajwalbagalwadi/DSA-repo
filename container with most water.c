/******************************************************************************
                      // JAI SHREEN RAM
*******************************************************************************/
//container with most water 
// brute force method 

#include <stdio.h>
// Function for max of two data
int max(int a, int b)
{
    return a>b?a:b;    
}
// Function for min of two data 
int min(int a ,int b)
{
    return a<b?a:b;
}

// Function for container with most water  

int most_h2o(int arr[],int size)
{
    int max_h2o=0;


     for(int i=0;i<size;i++)
     {
         for(int j=i+1;j<size;j++)
         {
             int width= j-i;
             int hit =min(arr[i],arr[j]);
             int area=width*hit;
             
             max_h2o=max(max_h2o,area);
             
             
             
             
         }
         
         
         
     }
     
     printf("%d max water container \n",max_h2o );
     
     
 }

// Main function 
int main()
{
    printf("JAI SHREE RAM \n");
    int arr[]={1,8,6,2,5,4,8,3,7};
    int n=9;
    most_h2o(arr,n);

    return 0;
}
