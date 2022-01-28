//error in random

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* linkstrt;
    struct node* linkend;
};
struct node* root;

void insertbegin()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node*));
    printf("Enter the data\n\v");
    scanf("%d",&temp->data);
    temp->linkstrt=NULL;
    temp->linkend=NULL;
    
    if(root==NULL)
    {
       root=temp; 
    }
    else
    {
        
        temp->linkend=root;
        root->linkstrt=temp;
        root=temp;
    }
    
}

void append()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node*));
    printf("Enter the data\n\v");
    scanf("%d",&temp->data);
    temp->linkstrt=NULL;
    temp->linkend=NULL;
    
    if(root==NULL)
    {
         printf("No element in linked list\n\v");
    }
    else
    {
        struct node* p;
        p=root;
    
       while(p->linkend!=NULL)
       {
         p=p->linkend;
       }
      temp->linkstrt=p;
       p->linkend=temp;
       
     
    }
    
    
}

int len()
{
    int length,count=0;;
    
    if(root==NULL)
    {
        printf("Length is Zero\n\v");
    }
    else
    {
       struct node* p;
       p=root; 
       while(p!=NULL)
       {
          count++;
          p=p->linkend;
       }
       printf("Length of DLS is %d\n\v",count);
    }
}

void randls()
{
    int length,loc,i=1;
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node*));
    if(root==NULL)
    {
        printf("Linked list does not exist\n\v");
        exit(0);
    }
    printf("Enter the data\n\v");
    scanf("%d",&temp->data);
    temp->linkstrt=NULL;
    temp->linkend=NULL;
    length=len();
    
    printf("Enter the location to insert node");
    scanf("%d",&loc);
    
    if(loc>length || loc==0)
    {
        printf("Location does not exist\n\v");
    }
    else
    {
      struct node* p;
      p=root;
      while(i<loc)
        {
            p=p->linkend;
            i++;
        }  
        temp->linkend=p->linkend;
        p->linkend->linkstrt=temp;
        p->linkend=temp;
        temp->linkstrt=p;
    }
    
    
}

void delete()
{
    int loc,length,i=1;
    printf("Enter the location to delete\t");
    scanf("%d",&loc);
    length=len();
    struct node* temp;
    
    if(loc>length||loc==0)
    {
        printf("List does not exist");
    }
     else if(loc==1)
    {
        root=temp->linkend;
        temp->linkend->linkstrt=NULL;
        temp->linkend=NULL;
        free(temp);
    }  
    else
    {
        struct node* p;
        struct node* q;
        p=root;
        while(i<loc-1)
        {
            p-p->linkend;
            i++;
        }
        q=p->linkend;
        p->linkend=q->linkend;
        q->linkend->linkstrt=p;
        q->linkend=NULL;
        q->linkstrt=NULL;
        free(q);
    }
}

void display()
{
    if(root==NULL)
    {
        printf("No element exist\n\v");
    }
    else
    {
        struct node* temp;
        temp=root;
        while(temp!=NULL)
        {
            
            printf("Data is %d \n current node  adress is %p\n and nxt node address in %p\n previous node address is %p\n\v ",temp->data,temp,temp->linkend,temp->linkstrt);
            temp=temp->linkend;
        }
    }
}

int main()
{
    int key;
    
    while(1)
    {
      printf("\n1: Insertbegin  2: Display  3: Append 4: Length 5: Random 6: Delete\n\v");
      scanf("%d",&key);
       switch(key)
       {
           case 1: insertbegin();
           break;
           
           case 2: display();
           break;
           
           case 3: append();
           break;
           
           case 4: len();
           break;
           
           case 5: randls();
           break;
           
           case 6: delete();
           break;
           
       }
    }
}
