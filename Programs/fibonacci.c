#include<stdio.h>
int main()
{
    int n,a=1,b=1,c,i=1;
    printf("Enter a number");
    scanf("%d",&n);
    while(i<=n)             //for(i=1;i<=n;i++)
    {
        printf(" %d\t",a);
        c=a+b;
        a=b;
        b=c;
        i++;
    }
}
