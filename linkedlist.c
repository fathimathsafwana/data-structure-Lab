#include<stdio.h>
#include<stdio.h>
struct node
{
    int data:
    struct node *link;
};
struct node*header=null;
struct node*newnode;
struct node*ptr;
struct node*ptr1;
voidinsert_at_front(int key)
{
if(header==null)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=key;
    newnode->link-null;
    header=newnode;
}
else
{
newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data=key;
    newnode->link-null;
    header=newnode;
}
}
void insert_at_end(int key)
{
    if(header==null)
    {
       newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=key;
    newnode->link-null;
    header=newnode;
} 
  else
  {
    ptr=header;
    while(ptr->link!=null)
    {
        ptr=ptr->link;
    }
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=key;
    newnode->link-null;
    ptr->link=newnode;
  }
}
void delete_at_front()
{
    ptr=header;
    if(ptr==null)
    {
        printf("linked list is empty");
    
    }
else{
    header=ptr->link;
    free(ptr);

}
}
void_delete_at_end()
{
    ptr=header->link;
if(ptr==null)
{
    printf("linkedlist is empty");
}
else{
    while(ptr->link!=null)
    {
        ptr1=ptr;
        ptr=ptr->link;
    }
    ptr1->link=null;
    free(ptr);
}
}
void_delete_at_any(int key)
{
    ptr=header->link;
    ptr1=header;
    while(ptr!=null){
        if(ptr->data==key)
        {
            ptr1->link=ptr->link;
            free(ptr);
            break;
        }
        else
        {
            ptr!=ptr;
            ptr=ptr->link;
        }
    }
if(ptr==null)

{
    printf("no key found");

}
}
int search(int key)
{
    int location=1;
}
