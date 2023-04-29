#include<stdio.h>
int main()
{
    int a , b;
    printf("enter your both numbers:");
    scanf("%d%d",&a,&b);

    if (a>b)
    {
        printf("%d is a bigger number than %d\n\n", a , b);
    } 
     else if(a==b)
        { 
           printf("Both numbers are equal", b , a);

        }
        else
        {
             printf("%d is a bigger number than %d", b , a);
        }
    
    return 0;
}