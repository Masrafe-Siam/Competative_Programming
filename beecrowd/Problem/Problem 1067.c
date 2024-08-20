/*Read an integer value X (1 <= X <= 1000). 
Then print the odd numbers from 1 to X,
each one in a line, including X if is the case.*/


#include<stdio.h>
int main()
{
	int i,a;
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
