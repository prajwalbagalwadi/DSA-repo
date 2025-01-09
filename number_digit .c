// JAI SHREE RAM
#include<stdio.h>
int split_num(int num);
int main()
{
    int num;
printf("JAI SHREE RAM\n");
printf("ENTER THE NUMBER \n");
scanf("%d",&num);
 split_num(num);
}

int split_num(int num)
{
//num=1234;
int result=0;
int even_number=0,odd_number=0;
 while(num>0)
 {
    
    int last_digit=num%10;
    num=num/10;
    result=last_digit+result;
    if(last_digit%2==0)
    {
        even_number=last_digit+even_number;
    }
    else {
       
        odd_number=last_digit+odd_number;
        
    }
    
   
    
 }
printf("odd_number result =%d\n",odd_number);
printf("even_number result =%d\n",even_number);

 printf("%d",result);

}