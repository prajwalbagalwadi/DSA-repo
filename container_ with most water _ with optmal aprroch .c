
/******************************************************************************       
                             // JAI SHREE RAM

*******************************************************************************/
 // Optimal approch using two pointer
#include <stdio.h>
// Function for find max
int max(int a, int b)
{
    return a>b?a:b;
    
}
 //function for max data
int min(int a ,int b)
{
    return a<b?a:b;
}
// Function for container with most water  with opitmal approch with two pointer 


int most_h2o(int arr[],int size)
{
    int rptr=0; 
    int lptr=size-1;
    int max_h2o=0; 
    
    while(rptr<lptr)
    {
        int wdith=lptr-rptr;
        int hit=min(arr[rptr],arr[lptr]);
        int area=wdith*hit;
        max_h2o=max(max_h2o,area);
        
        
        if (arr[rptr] < arr[lptr]) rptr++;
        else lptr--;
    
        
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
