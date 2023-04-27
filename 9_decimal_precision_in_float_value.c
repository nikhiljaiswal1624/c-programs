#include<stdio.h>
int main()
{
    float num=2.5;
    //if we print normaly after decimal it would print 6 digits
    printf("%f\n",num);

    printf("%.1f\n",num);
    printf("%.3f",num);
    return 0;
}