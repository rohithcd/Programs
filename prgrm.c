#include <stdio.h>
void main()
{
	int a[100],i,n,j,t;
	printf("enter the size");
	scanf("%d",&n);
	printf("enter the digits");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
		}
		for(i=0; i<n-1; i++)
		for(j=0; j<(n-i)-1; j++)
		if(a[j]>a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
			}
			
			printf(" the sorrted array is ");
			for(i=0; i<n; i++)
			printf(" %d ",a[i]);
				}
