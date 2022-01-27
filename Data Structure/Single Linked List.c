#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* link;
};

struct node* root;

void insertend()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(temp));
    printf("Enter data");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp; 
    }
    else
    {
        struct node* p;
        p=root;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
        temp->link=NULL;
    }
}

void insertbegin()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node*));
    printf("Enter data : ");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        temp->link=root;
        root=temp;
    }
}

int len()
{
    int count=0;
    struct node* temp;
    temp=root;
    while(temp!=NULL)
    {
      
        temp=temp->link;
        count++; 
    }
    printf("Length of list is  %d \n",count);
    return count;
}

void inbetween()
{
    int loc,length,i=1;
    
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node*));
    temp->link=NULL;
    
    printf("Enter the insert location");
    scanf("%d",&loc);
    
    printf("Enter data : ");
    scanf("%d",&temp->data);
    
    length=len();
    if(loc>length || loc==0)
    {
        printf("Location does not exist");
    }
    else
    {
        struct node* p;
        p=root;
        while(i<loc)
        {
           p=p->link; 
           i++;
        }
        temp->link=p->link;
        p->link=temp;
    }
}

int delete()
{
    int loc,length,i=1;
    printf("Enter the location to delete\t");
    scanf("%d",&loc);
    struct node* temp;
    temp=root;
    
    length=len();
    
    if(loc>length)
    {
        printf("List does not exist");
    }
     else if(loc==1)
    {
        root=temp->link;
        temp->link=NULL;
        free(temp);
    }
    
    else
    {
    
     while(i<loc-1)
       {
           temp=temp->link;
           i++;
       }
      struct node* q;
      q=temp->link;
      temp->link=q->link;
      q->link=NULL;
      free(q);
    }
}


void display()
{
    struct node* d;
    d=root;
    while(d!=NULL)
    {
        printf("data is %d \t and link is %p\n",d->data,d->link);
        d=d->link;
    }
}

int main()
{
   int keyword;
   while(1)
   {
        printf("1 : Insert at end\t 2:Insert at beginning\t 3:Insert in between\t 4: Length\t 5:Display\t 6:delete ");
       scanf("%d",&keyword);
    switch(keyword)
     {
       case 1: insertend();
       break;
       
       case 2: insertbegin();
       break;
       
       case 3: inbetween();
       break;
      
       case 4: len();
       break;
       
       case 5: display();
       break;
       
       case 6: delete();
       break;
     
     }
  }
}

