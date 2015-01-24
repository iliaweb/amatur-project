#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a ,b;
    int res;
    char g;

    printf("enter a number:");
    scanf("%d",&a);

    printf("enter another number:");
    scanf("%d",&b);

    printf("enter operation:");
    scanf("%ch",&g);

    switch(g=getchar())
    {
        case '*':
        res=a*b;
        break;

        case '+':
        res=a+b;
        break;

        case '-':
        res=a-b;
        break;

        case '/':
        res=a/b;
        break;

        default:
        printf("please enter a operation.");
        break;
        }
        printf("\n%d %c %d = %d\n",a,g,b,res);
    return 0;
}
