
#include <stdio.h>

int main()
{
    int num1,num2,lcm,flag=1;
    printf("Enter two numbers");
    scanf("%d %d",&num1,&num2);
    lcm=(num1>num2)?num1:num2;
    while(flag)
    {
    if(lcm%num1==0&& lcm%num2==0)
    {
        printf("LCM of %d and %d is %d",num1,num2,lcm);
        flag=0;
    }
    lcm++;
    
}
return 0;
}
