#include<stdio.h>
#include<conio.h>
int main()
{
	printf("program for star pattern");
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=10;j>0;j--)
		{
			if(i==j)
			{
				printf("*\n");
				
			}
			else
			{
				printf(" \n");
				
			}
		}
		
	}
	return 0;
}
