#include<stdio.h>

int main()
{

 int n,i,key;

 int arra[100],pos[100];
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
     scanf("%d",&arra[i]);
 }

 scanf("%d",&key);


 int cnt=0;
 for(i=0;i<n;i++)
 {
    if(arra[i]==key)
    {
        pos[cnt]=i+1;
        cnt++;

    }

 }

    for(i=0;i<cnt;i++)
    {
        printf("Item Found at: %d\n",pos[i]);
    }

    return 0;
}
