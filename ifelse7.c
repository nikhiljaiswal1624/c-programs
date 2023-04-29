#include<stdio.h>
int main()
{
    int num;

    printf("Enter the to check if it is even or odd: ");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("The number is a even number");
    }
    else{
        printf("The number is a odd number");
    }
    
return 0;

}