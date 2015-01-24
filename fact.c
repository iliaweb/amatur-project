#include <stdio.h> 
int main()
{
int n;
int i;
int s;
printf("enter a number:");

scanf("\n%d",&n);
for (s=1,i=n;i>1;i--)
{
    s=s*i;
}
printf("fact%d = %d",n,s);

return 0;
}
