#include<stdio.h>

int findlen(char str[])
{

     int len=0,i=0;

    while(str[i]!='\0')
    {
        len++;
        i++;
    }

    return len;
}

int main()
{

 char str1[100],str2[100],output[100];

 gets(str1);
 gets(str2);

 int len1=findlen(str1);
 int len2= findlen(str2);

 //str1=leading
 //str2=University
int i,total;
for(total=0;total<len1;total++)
{
    output[total]=str1[total];
    printf("%c\n",str1[total]);
}

output[total]=' ';
total++;
for(i=0;i<len2;i++)
{
   output[total]=str2[i];
   total++;
}

output[total]='\0';
puts(output);

    return 0;
}

