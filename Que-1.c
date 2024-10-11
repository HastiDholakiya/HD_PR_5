#include<stdio.h>

int main()
{
	int i,n;
	
	printf("Enter array size: ");
	scanf("%d",&n);
	
	int a[n];
	
		printf("Enter arrays elements: \n");
			
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
    printf("Negative elements from an array:- \n");
    
    for(i=0;i<n;i++)
    {
    	if(a[i]<0)
    	{
    		printf("%d\n",a[i]);
		}
	}
	
}

