/*Write a program that reads 6 numbers.
These numbers will only be positive or negative (disregard null values).
Print the total number of positive numbers.*/


#include<stdio.h>
int main()
{
	float num;
	int count=0,i;
	for(i=1;i<=6;i++)
	{
	scanf("%f",&num);
	if(num>0)
		{
			count=count+1;
		}		
	}
	printf("%d valores positivos\n",count);
	return 0;	
}
