
// JAI SHREE RAM 
#include<stdio.h>

void main()
{
printf("JAI SHREE RAM +++ RAJ RAM CHANDARA\n");
int size,index;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int elements;
    int arr[size];
input_array_data( &arr,  size);
printf("enter the searching element\n");
scanf("%d",&elements);
int opt;
printf("select the searching alog :\n1: linear serach\n2:binary search\n");
scanf("%d",&opt);
switch(opt)
{
    case 1:linear_search(arr, size,elements);

    break;
    case 2:int src_inx=Binary_search(arr,size,elements);
    printf("element %dand index %d",elements,src_inx);
    break;
    default:printf("not in option\n");

}
}

int linear_search(int array[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(array[i]==element)
        {
            printf("element Index=%d",i);
            return 0;
        }
      
    }
    return printf("elemnt not found\n");

}

int Binary_search(int array[],int size, int element)
{
    int low=0 ,high=size-1;
    
    while(low<=high)
    {
        int mid=(low+high)/2; 
        if(array[mid]==element)
        {return mid;}
            //return printf("element %d at index %d",mid,array[]);}

        if(array[mid]<element)
        {
            low=mid+1;
            

        }
        if (array[mid]>element)
        {
            high=mid-1;
            
        }




    }

}
void input_array_data(int array[], int size)
{
    printf("Enter the elements in the array:\n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
}
