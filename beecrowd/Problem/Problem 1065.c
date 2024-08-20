/*Make a program that reads five integer values.
Count how many of these values are even and 
print this information like the following example.*/


#include<stdio.h>
int main()
{
	int count=0,i,num;
	for(i=1;i<=5;i++)
	{
	scanf("%d",&num);
	if(num%2==0)
		{
			count=count+1;
		}		
	}
	printf("%d valores pares\n",count);
	return 0;	
}
