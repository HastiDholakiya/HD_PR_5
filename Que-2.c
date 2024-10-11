#include<stdio.h>

int main()
{

	int i,j;
	int r,c;
	
	printf("How many rows : ");
	scanf("%d",&r);
	printf("How many colums : ");
	scanf("%d",&c);

    int largest;
	int array[r][c];
		
	printf("Enter array elements : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		    printf("array[%d][%d]= ",i,j);
		    scanf("%d",&array[i][j]);
	    }
    }
    largest=array[0][0];
    printf("The largest elements is : \n");
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		if(array[i][j]>largest)
    		{
    		largest=array[i][j];
			}
		}
	}

	printf("%d",largest);
}

