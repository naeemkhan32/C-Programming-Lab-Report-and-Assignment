#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct l_list
{
    int info;
    struct l_list *next;
}start, *node;

int ptr=0;
int main()
{
    int no,i,item,pos;
    //start=(struct l_list *)malloc(sizeof(struct l_list));
    start.next=NULL;
    node=&start;
    printf("How many nodes, you want in linked list? ");
    scanf("%d",&no);
    printf("");
    for(i=0;i<no;i++)
    {
        node->next=(struct l_list *)malloc(sizeof(struct l_list));
        printf("Enter element in node %d: ",i+1);
        scanf("%d",&node->info);
        node=node->next;
    }
    node->next=NULL;
    printf("Enter item to search: ");
    scanf("%d",&item);
    node=&start;
    int flag=0;
    while(node->next!=NULL)
    {
        if(node->info==item)
        {
            printf("Item found!!!!!");
            flag=1;
            break;
        }
        node=node->next;
    }

    if(flag!=1)
        printf("Item not found!!!!!");
    //printf("%d\n",ptr);
    return 0;
}


