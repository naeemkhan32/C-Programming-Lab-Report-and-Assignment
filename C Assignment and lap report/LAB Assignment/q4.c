#include<stdio.h>

void getFibo()
{
    int n,fib1,fib2,temp;
    fib1=0,fib2=1;

    scanf("%d",&n);

    if(n<=5000){
        for(int i=0;i<=n;i++)
        {
            temp=fib1;
            fib1=fib2;
            fib2=temp+fib2;
        }
        printf("The fibonacci number for %d is %d\n",n,temp);
    }
}

int main()
{
    while(1){
        getFibo();
    }
    return 0;
}
