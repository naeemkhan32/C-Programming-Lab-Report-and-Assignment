#include<stdio.h>

int main()
{
    int arra[100],n,i,max_val,item,loc;


    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arra[i]);

    max_val= -10000000,loc=-1;

    i=0;
    while(i<n)
    {
        if(max_val<arra[i])
        {
            max_val=arra[i];
            loc= i+1;
        }

        i++;
    }

    printf("The max element is the dataset is: %d and loc: %d\n",max_val,loc);


    return 0;
}
