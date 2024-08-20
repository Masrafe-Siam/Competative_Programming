/*Make a program that reads a seller's name,
his/her fixed salary and the sale's total made by himself/herself in the month (in money).
Considering that this seller receives 15% over all products sold,
write the final salary (total) of this seller at the end of the month ,with two decimal places.*/


#include<stdio.h>
int main()
{
	char name;
	double salary,total;
	scanf("%s",&name);
	scanf("%lf %lf",&salary,&total);
	total=salary+(total*.15);
	printf("TOTAL = R$ %.2f\n",total);
	return 0;
}
