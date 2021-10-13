#include<stdio.h>

struct Area
{
    int w; //member variable
    int h; //member variable
    int l;
    float area;
};

//32*3=96+64= 160 bits

int main()
{
    struct Area house, *house_pointer;

    house.w=10; //To access member varible we use dot operator
    house.h=5;
    house.l=15;

    //To access sturuture member using pointer, we use arrow(->) operator

    //house_pointer = &house;
    house_pointer= (struct Area *)malloc(sizeof(struct Area));

    house_pointer->w=10;
    house_pointer->h=5;
    house_pointer->l=15;

    house_pointer->area=house_pointer->w*house_pointer->h*house_pointer->l;
    printf("The area of the House 1 is: %f\n",house_pointer->area);

    return 0;
}

