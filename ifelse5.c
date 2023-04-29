#include <stdio.h>
int main()
{
    int num;


    printf("Enter a number to check weather the number is positive, negative, or zero:\n");
    scanf("%d",&num);

    if (num>0)
    {
        printf("The number is positive");
    }
    else if (num<0)
    {
        printf("The number id negative");
    }
    else
    printf("The number is zero");

    return 0;
    

}