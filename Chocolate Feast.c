#include <stdio.h>
#include <stdlib.h>
int main()
{
int v,i,t,n,m,c;
scanf("%d",&v);
for(i=0;i<v;i++)
{
printf("enter your money:");
scanf("%d",&n);

printf("\nenter price chocolate:");
scanf("%d",&c);

printf("\nenter wraperr(dont enter 0):");
scanf("%d",&m);

if (m==0) break;

t= n/c;

if(t==m)
t++;
else if(t>m){
t=t+(t/m);
t=t+((t/m)-(n/c)/m);
}

if(t==0)
printf("\noh.sorry your money is not enough.\n");

else
printf("\nyou can eat %d\n chocolate.\n",t);
}


return 0;
}
