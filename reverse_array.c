// JAI SHREE RAM
#include<stdio.h>
int reverse_array(int arr[],int size);
void input_array_data(int array[], int size);
void print_array(int arr[],int size);
main()
{
    printf("JAI SHREE RAM +++ RAJ RAM CHANDARA\n");
int size,index;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
input_array_data( arr,  size);
printf("INPUT ARRAY\n");
print_array(arr,size);
 reverse_array( arr, size);

}

int reverse_array(int arr[],int size)
{
    int start=0;
    int end=size-1;
    int temp;
    while(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;end--;
    }
    printf("ARRAY REVERSE\n");
    print_array(arr,size);

} 
void input_array_data(int array[], int size)
{
    printf("Enter the elements in the array:\n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
}

void print_array(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf(" %d\n",arr[i]);
    }
}