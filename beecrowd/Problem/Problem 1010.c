/*In this problem, the task is to read a code of a product 1,
the number of units of product 1,
the price for one unit of product 1, the code of a product 2,
the number of units of product 2 and the price for one unit of product 2.
After this,calculate and show the amount to be paid.*/


#include<stdio.h>
int main()
{
	int a1,b1,a2,b2;
	float c1,c2,d1,d2,e;
	scanf("%d %d %f %d %d %f",&a1,&b1,&c1,&a2,&b2,&c2);
	d1=b1*c1;
	d2=b2*c2;
	e=d1+d2;
	printf("VALOR A PAGAR: R$ %.2f\n",e);
	return 0;
}
