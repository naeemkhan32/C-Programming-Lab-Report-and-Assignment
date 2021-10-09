#include<stdio.h>
#include<string.h>
int main()
{

    int hh,mm,ss;
    char n[3];
    scanf("%d",&hh);

    scanf("%d",&mm);
    scanf("%d",&ss);

    scanf("%s",&n);
    if(hh <=12 && mm <= 59 && ss <59){
        if((strcmp(n,"PM")==0)||(strcmp(n,"pm")==0)&&(hh!=12)&&(hh!=0)){
            hh == hh+12;
        }
        if((strcmp(n,"AM")==0)||(strcmp(n,"am")==0)&&(hh!=12)&&(hh!=0)){
            hh == 0;
        }

        printf("%02d:%02d:%02d",hh,mm,ss);

        printf("\n");

    }
    else{
        printf("Error!,provide the right inputs");
    }
    return 0;

}
