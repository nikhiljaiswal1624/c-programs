#include<stdio.h>
int main()
{
    int a ,b;
    printf("Enter your both num:\n");
   
    scanf("%d%d",&a,&b);

    if(a<b){
        printf("%d is manimum",a);
    }if (b<a)
    {
        printf("%d is minimum",b);/* code */
    }if (a==b)
    {
       printf("Both are equal")  ;          /*  code */
    }
    return 0;
}