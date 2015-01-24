#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void solve2 ();


int main()
{
	solve2();
return 0;
}
 void solve2()
{
	float a,b,c;
    printf("\n hale moadele darage2 ba metod malek\n");
	printf("aX2+bX+c=0");

	printf("\na ro vared kon:\n");
	scanf ("%f",&a);

	printf("\nb ro vared kon:\n");
	scanf ("%f",&b);

	printf("\nc ro vared kon:\n");
	scanf ("%f",&c);

printf("\nmadele shmoma %.0fX2+%.0fX+%.0f=0 ",a,b,c);

    if(a==0)
	{	float x;
		if(b==0)
		{
			printf("\nohoooy ghabel hal ni.\n");
		}
		else
		{
			printf("\nmoadele darage1 ast.\n");
			x=-c/b;
			printf("\nX=%f\n",x);
		}
	}

	else
	{

	float delta=b*b-(4*a*c);
	float x1,x2;

		if(delta==0)
		{
			printf("\nmoadele darage2 ye rishe mozaaf dare.\n");
			x1=-b/( 2*a);
			printf("\nX1=X2=%f\n",x1);
		}

		else if ( delta > 0)
		{
			printf("\nmoadele 2 rishe dare.\n");
			x1=(-b+ sqrt(delta))/(2*a);

			x2=(-b- sqrt(delta))/2*a;

			printf("\nX1=%f\n",x1);

			printf("\nX2=%f\n",x2);
		}
		else
		{
			printf("\nmoadele 2rihe mokhtalet darad ke man balad nistam\n");
		}

        printf("\nta moadele badi shoma ra be khoda miseparam\n\n");

	}


}

