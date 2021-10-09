#include<stdio.h>
int main()
{
    //int num[]={30,10,3,36,28,33,90,88,64,98};
    int value,pos=-1,i,num[10],n;

    printf("how many number = ");  // bul ace
    scanf("%d",&n);

    for(i=0; i<n; i++){
        scanf("%d",&num[i]);
    }

   // printf("enter the searching number = ");


    for(i=0; i<n; i++){
        if(value==num[i]){
            pos = i+1;
            break;
        }
    }

    if(pos ==-1){
        printf("Item is not fount");
    }
    else
    {
        printf("Item is fount the postition %d ",pos);
    }


    return 0;
}

