/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
  int fib(int *d,int *e,int *f)
    {
        *f=*d+*e;
        *d=*e;
        *e=*f;
        return 0;
    }



int main()
{
    int n,a=1,b=1,c,i=1;
    printf("Enter a number");
    scanf("%d",&n);
    while(i<=n)             //for(i=1;i<=n;i++)
    {
        printf(" %d\t",a);
        fib(&a,&b,&c);
        i++;
    }
    
   
    
}