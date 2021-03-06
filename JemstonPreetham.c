#include<stdio.h>
void main()
{
	int a[100],x[100];
	int i,j,n,m,y,temp;
	printf("enter no of inputs");
	scanf("%d",&n);//total number of inputs 
	printf("enter %d values",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);//taking values from the keyboard
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];//sorting using temporary variable
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n");
	printf("enter no of employees");
	scanf("%d",&m);//number of employees
	for(i=0;i<n-m+1;i++)
	{
		x[i]=a[i+m-1]-a[i];//difference between i and i+m 
	}
	
	for(i=0;i<n-m+1;i++)
	{
		for(j=0;j<n-m;j++)
		{
			if(x[j]>x[j+1])
			{
				temp=x[j];//sorting
				x[j]=x[j+1];
				x[j+1]=temp;
			}
		}
	}
	y=x[0];//highest and lowest price difference(lowest)
	for(i=0;i<n-m;i++)
	{
		if(y==a[i+m-1]-a[i])
		{
			for(j=i;j<i+m;j++)
			{
				printf("%d\n",a[j]);
			}
		}
	}
	printf("And the difference between the chosen goodie with highest price and the lowest price is ");
	printf("%d",x[0]);//displaying
	
}
