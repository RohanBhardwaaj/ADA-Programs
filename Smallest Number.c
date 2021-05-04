#include<stdio.h>

int main()
{
	int arrayay[100],n,l,min;

	printf("How many values do you want to enter : ");
	scanf("%d",&n);

	for (l=0;l<n;l++)
	{
		printf("Enter element %d : ",l);
		scanf("%d",&arrayay[l]);
	}
	
	for (l=0;l<n;l++)
	{
		printf("%d \n",arrayay[l]);
	}
	
	min=arrayay[0];
	
	for(l=1;l<n;l++)
	{
		if(min>arrayay[l])
		{
			min=arrayay[l];
		}
	}
	
	printf("Smallest Number %d",min);
}

