#include <stdio.h>
void printaraye(int b[],int N );
int mean(int b[],int N);
void buble(int h[],int N);

int main()
{
	int k[]={5,0,6,7,8,45,12,2,77};

	int N=sizeof(k) / sizeof(k[4]);

	printaraye(k,N);



	float m = mean(k,N);
	printf("\nmean = %f",m);

	buble(k,N);

	printaraye(k,N);

return 0;
}

void printaraye(int b[],int N )
{
	printf("\nitem of araay:\n");
	int i;
	for(i=0;i<N;i++)
	{	printf("%d",b[i]);
		if(i<N-1)
		printf(",");
	}
}
int mean(int b[],int N)
{
	int i;
	int sum=0;
	for(i=0;i<N;i++)
	{
	 sum = b[i]+sum;
	}
	float mean;
	mean = (float)sum/N;

return mean;
}
void buble(int h[],int N)
{
	int i,j;
	int swap;
	for(i=0;i<N;i++)
	{
        swap=0;
		for(j=0;j<N-1;j++)
		{
		if(h[j]>h[j+1])
	      {
			int temp;

		temp=h[j];
		h[j]=h[j+1];
		h[j+1]=temp;
	     swap=1;
	      }
         }
	if(!swap) break;

    }

}
