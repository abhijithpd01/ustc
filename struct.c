#include<stdio.h>
int n;
struct student
{
    char name[20];
    int emp_no;
    float salary;
    int phone;
}st[3];

#include<stdio.h>
int n;
struct student
{
    char name[20];
    int emp_no;
    float salary;
    int phone;
}st[3];
int main()

{
    int i;
    printf("Enter the no f students in a class\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)  
    {
       printf("Enter the name of %dth student\n",i); 
       scanf("%s",st[i].name);    // no & is needed for string and char
       
       printf("Enter the ID of %dth student\n",i); 
       scanf("%d",&st[i].emp_no);  
       
       printf("Enter the salary of %dth student\n",i); 
       scanf("%f",&st[i].salary);  
       
       printf("Enter the phone of %dth student\n",i); 
       scanf("%d",&st[i].phone);  
    }
    
    for(i=1;i<=n;i++)  
    {
       printf("%dth student name is %s\n",i,st[i].name); 
       
       printf("%dth  student ID is %d\n",i,st[i].emp_no);
       
       printf("%dth  student salary is %f\n",i,st[i].salary);
       
       printf("%dth  student phone is %d\n",i,st[i].phone);
      
      
    }
}

