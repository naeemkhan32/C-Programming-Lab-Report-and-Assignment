 #include <stdio.h>

int main()
{
    int low,up,fact=1;
    printf("Enter the lower limit: ");
    scanf("%d",&low);
    printf("Enter the upper limit: ");
    scanf("%d",&up);

    while(low<=up){
        for(int i=1;i<=low;i++){
            fact=fact*i;
        }
        printf("Factorial of %d : %d\n",low,fact);

        fact=1;
        low++;
    }

    return 0;

}
