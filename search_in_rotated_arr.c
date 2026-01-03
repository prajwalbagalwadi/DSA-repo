/******************************************************************************
Search the element in an array which is rotated and sorted array like

arr[]={7,8,9.0,1}

or 

arr[]={4,5,6,7,1,2,0}

we are using the binary search algorithm with slight modifide.
*******************************************************************************/
// JAI SHREE RAM 

#include <stdio.h>

// search in rotated stored array 
int search_in_rotated_arr(int arr[],int size, int traget)
{
    int start=0;
    int end=size-1; 
    int mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==traget)
        {
            printf("traget found is %d and the arr index is %d",traget,mid);
            
        }


        if(arr[start]<=arr[mid ])
        {
                //left sort  search
            if(arr[start]<=traget && traget<=arr[mid])
            {
                end=mid-1;
                
            }
            else {
                start=mid+1;
            }
        }
        else {
            // right sort search
            if(arr[mid]<= traget && traget<=arr[end])
            {
                start=mid+1;
            }
        
            else
            {
                end=mid-1;
            }
        }
    }
    return -1;
}



// main function 

int main()
{
    
    printf("JAI SHREE RAM\n");
    int arr[]={7,8,9,0,1};
    int size=5;
    int target=1;
    search_in_rotated_arr(arr,size,target);
  //printf("%d",res);

    return 0;
}
