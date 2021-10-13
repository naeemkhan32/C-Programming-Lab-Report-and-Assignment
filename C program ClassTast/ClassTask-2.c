#include<stdio.h>

int main()
{
    char str[100],pat[100];

    gets(str);
    gets(pat);

    int s= strlen(str);
    int r= strlen(pat);

    int maximum = s-r;

    int k,l,flag,index=-1;
    for(k=0;k<=maximum;k++)
    {
        flag=0;
        for(l=0;l<r;l++)
        {
            if(pat[l]!=str[k+l])
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
        {
            index=k;
            break;
        }

    }
    if(index==-1)
    {
        printf("Pat Not found\n");
    }
    else
        printf("Pat found at position %d\n",index+1);


    return 0;
}

