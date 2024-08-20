/*Make a program that calculates and shows the volume of a sphere being provided the value of its radius (R).
The formula to calculate the volume is: (4/3) * pi * R3. Consider (assign) for pi the value 3.14159.*/


#include<stdio.h>
#include<math.h>
#define pi 3.14159
int main()
{
	double R,VOLUME;
	scanf("%lf",&R);
	VOLUME=(4/3.0)*pi*pow(R,3);
	printf("VOLUME = %.3f\n",VOLUME);
	return 0;
}
