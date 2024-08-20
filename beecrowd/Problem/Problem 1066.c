/*Make a program that reads five integer values.
Count how many   of these values are even, odd, positive and negative.
Print these information like following example.*/


#include<stdio.h>
int main()
{
	int i,num;
	int even=0,odd=0,positive=0,negetive=0;
	for(i=1;i<=5;i++)
	{
	scanf("%d",&num);
	if(num%2==0)
		{
			even+=1;
		}if (num%2!=0)	{
			odd+=1;
		}if (num>0){
			positive=positive+1;
		}if(num<0){
			negetive=negetive+1;
		}
	}
	printf("%d valor(es) par(es)\n",even);
	printf("%d valor(es) impar(es)\n",odd);
	printf("%d valor(es) positivo(s)\n",positive);
	printf("%d valor(es) negativo(s)\n",negetive);
	return 0;	
}
