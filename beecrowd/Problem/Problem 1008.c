/*Write a program that reads an employee's number, 
his/her worked hours number in a month and the amount he received per hour. 
Print the employee's number and salary that 
he/she will receive at end of the month, with two decimal places.*/



#include<stdio.h>
int main()
{
	int employee,hour;
	float salary;
	scanf("%d",&employee);
	scanf("%d",&hour);
	scanf("%f",&salary);
	salary=hour*salary;
	printf("NUMBER = %d\n",employee);
	printf("SALARY = U$ %.2f\n",salary);
	return 0;
}
