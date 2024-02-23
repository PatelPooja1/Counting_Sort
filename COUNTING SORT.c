#include<stdio.h>
void CountSort(int a[],int n)
{
	int i,b[n];
	int max=a[0]; 
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	int count[max+1];
	for(i=0;i<=max;i++)
	{
		count[i]=0;
	}
	for(i=0;i<n;i++)
	{
		count[a[i]]=count[a[i]]+1;
	}
	for(i=1;i<=max;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	for(i=n-1;i>=0;i--)
	{
		b[--count[a[i]]]=a[i];
	}
	for(i=0;i<n;i++)
	{
		a[i]=b[i];
	}
}
int main()
{
	int i,n;
	printf("\n.....COUNTING SORT.....\n");
	printf("\n ENTER THE ARRAY ELEMENTS: \n");
	{
	   scanf("%d",&n);
    }
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("ENTER THE ELEMENTS:\n");
		scanf("%d",&a[i]);
	}
	printf("\n.....UNSORTED ARRAY....\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	CountSort(a,n);
	printf("\n......THE SORTED ARRAY....\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
