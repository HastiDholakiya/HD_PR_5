#include<stdio.h>

int main()
{

	int i,j;
	int r,c;
	int array[10][10];
	int transpose[10][10];
	
	printf("How many rows : ");
	scanf("%d",&r);
	printf("How many colums : ");
	scanf("%d",&c);
		
	printf("Enter array elements : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		    printf("array[%d][%d]= ",i,j);
		    scanf("%d",&array[i][j]);
	    }
	}
	for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		printf("%d",array[i][j]);
		}
		    printf("\n");
	}
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		transpose[j][i]=array[i][j];
		}
	}
	printf("The transpose of an array : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        	printf("%d ",transpose[i][j]);
		} 
		printf("\n");
	}
}

