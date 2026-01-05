/******************************************************************************
PEAK INDEX IN MOUNTAIN ARRAY WE HAVE THE ARRAY IN THE FROM OF MOUNTAIN STRUCTURE 
WHERE ONE ELEMENT IS HIGHEST THAT IS PEAK 

PEAK INDEX IN MOUNTAIN ARRAY
*******************************************************************************/
// JAI SHREE RAM 
#include <stdio.h>
// FUNCTION  TO FIND THE PEAK INDEX IN MOUNTAIN ARRAY
int mout_arr(int arr[],int size)
{
// NOTE CONSIDERING THE STATRTING AND ENDING INDEX ARE NOT THE PEAK SO WE ARE ASSINING THE START WITH INDEX 1 AND END WITH SIZE-2
    int start=1;
    int end =size-2;
    while(start<=end)
    {
        int mid =start+(end-start)/2;
        if(arr[mid-1]<arr[mid] && arr[mid+1]<arr[mid] )
        {
            printf("highest mountain peak is %d and %d",mid,arr[mid]);
          //return mid;
        }
      // IF ARRAY MID IS LESS THAN PREIVOUS ELEMNET OF MID ARRAY i,e  ARR[MID-1 ] THAN MOVE THE START POINT TO THE MID+1
      if(arr[mid-1]<arr[mid])
        {
            start=mid+1;
        }
       else
        {
            end=mid-1;
        }
    } 
    return -1;
    
    
    
    
    
}

int main()
{
    printf("JAI SHREE RAM\n");
    int arr[]={0,3,4,5,8,2};
    //  int arr[]={0,3,6,1,8,2};
    int size=6;
 int res=   mout_arr(arr,size);
// printf("%d",res);
    

    return 0;
}
