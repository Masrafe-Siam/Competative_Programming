/*Read 6 values that can be floating point numbers.
After, print how many of them were positive.
In the next line, print the average of all positive values typed,
with one digit after the decimal point.*/


#include<stdio.h>
int main()
{
	float num,sum=0,avg;
	int count=0,i;
	for(i=1;i<=6;i++)
	{
	scanf("%f",&num);
	if(num>0)
		{
			count+=1;
			sum+=num;
			avg=sum/count;
		}		
	}
	printf("%d valores positivos\n%.1f\n",count,avg);
	return 0;	
}
