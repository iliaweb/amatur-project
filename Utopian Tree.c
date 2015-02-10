#include <stdio.h>
int main()
{
    while(EOF)
    {
    int i;
    int n;
    int f=1;

    printf("\ntedad dore roshd ?");
    scanf("%d",&n);
        if(n%2==0)
        {
        for(i=1;i<=n/2;i++)
        {

            f=(f*2);
            f=f+1;
        }
        }
        else
        {
        for(i=1;i<=n/2;i++)
        {

            f=(f*2);
            f=f+1;
        }

        f=f*2;
        }
    printf("%d",f);
        }
return 0;
}
