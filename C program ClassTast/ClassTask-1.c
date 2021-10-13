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
    printf("Linked list(only with info field) is: ");
     printf("\n");
    node=&start;
    while(node->next!=NULL)
    {
        printf("m.address %d info: %d\n",node,node->info);
        node=node->next;
    }
    //printf("%d\n",ptr);
    return 0;
}


