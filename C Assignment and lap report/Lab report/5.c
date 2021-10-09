#include <stdio.h>

int main()
{
    float a, b, c, d, e, maximum;
    printf("Enter the float number : ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

    maximum = (a > b && a > c && a > d && a > e) ?
              a : ((b > c && b > d && b > e) ?
              b : (c > d && c > e) ?
              c : (d > e) ?
              d : e);

    printf("Maximum number : %0.2f\n",maximum);
    return 0;
}
