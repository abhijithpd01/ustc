#include<stdio.h>
int main()
{
    int i,n;
    printf("size of array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n;i++)
    {
     printf("Enter the %dth elements in an array\n",a[i]);  
     scanf("%d",&a[i]);
    }
    printf(" the elements in an array are ");
    for(i=0;i<n;i++)
    {
       
     printf(" %d\t",a[i]);
     
    }
}



