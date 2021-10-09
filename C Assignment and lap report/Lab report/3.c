#include<stdio.h>
#include <string.h>

int main()
{
    char p[35];
    char q[35];
    char r[35];

    printf("Enter a first binary  : ");
    scanf("%s",&p);
    printf("Enter a second binary : ");
    scanf("%s",&q);
    int len1=strlen(p);
    int len2=strlen(q);

    int temp;
    if(len1>=len2)
        temp=len1;
    else
        temp=len2;

    for(int i=0;i<=temp;i++){
        if (p[i]=='0' && q[i]=='0')
            r[i]='0';

        if (p[i]=='1' && q[i]=='0')
            r[i]='1';


        if (p[i]=='0' && q[i]=='1')
            r[i]='1';


        if (p[i]=='1' && q[i]=='1')
            r[i]='0';

    }

    printf("Addition of binary without any carry : %s\n",r);

    return 0;
}
