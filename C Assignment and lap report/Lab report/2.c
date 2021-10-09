#include<stdio.h>

int main()
{
    int N,fib1,fib2,temp;

    printf("Enter a number: ");
    scanf("%d",&N);

    fib1=0,fib2=1;

    printf("Fibonacci series : %d ",fib1);

    for(int i=2;i<=N;i++){

        temp=fib1+fib2;
        fib1=fib2;
        fib2=temp;

        printf("%d ",fib1);

    }

    return 0;

}
