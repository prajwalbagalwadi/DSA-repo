// JAI SHREE RAM 
#include<stdio.h>
int bin_dec(int num);
int dec_bin(int dec_num);


void main()
{
    printf("JAI SHREE RAM\n");
    int choice ,num;
    printf("CHOOSE FOR THE CONVERSION METHOD\n  1 >>> binary_to_decimal\n 2>>> decmial_to_binary\n");
scanf("%d",&choice);
    switch (choice)
    {
    case 1 :/* constant-expression */
        /* code */
        printf("CONVERSION BINARY TO DECMAIL\n");
        scanf("%d",&num);
        bin_dec(num);
        break;
    case 2:
    printf("CONVERSION  DECMAIL TO BINARY  \n");
        scanf("%d",&num);
    dec_bin(num);
    break;
    
    default:
            printf("default case\n");
        break;
    }
    

}

int bin_dec(int num)
{
    
    int power=1;
    int result=0;
    while (num>0)
    {
        int rem= num%10;
        result=result+(rem*power);
        num=num/10;
        power=power*2;
       
    }
     printf("%d",result);
}

int dec_bin(int dec_num)
{
     int power=1,result=0;
while(dec_num>0)
{
    int rem=dec_num%2;
     dec_num=dec_num/2;
     result=result+(rem*power);
        power=power*10;
    
}
    printf("%d",result);

}