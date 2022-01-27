/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
int main()
{
    int a,b,i,r=0,sum=0;
    printf("digits in number");
    scanf("%d",&b);
    printf("Enter a number");
    scanf("%d",&a);
    for(i=0;i<=b;i++)
    {
      r=a/10;
      sum=sum+r;
    
    }
    
     printf("sum is %d",sum);
}
