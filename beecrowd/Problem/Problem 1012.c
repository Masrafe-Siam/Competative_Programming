/*Make a program that reads three floating point values: A, B and C. Then, calculate and show:
a) the area of the rectangled triangle that has base A and height C.
b) the area of the radius's circle C. (pi = 3.14159)
c) the area of the trapezium which has A and B by base, and C by height.
d) the area of ??the square that has side B.
e) the area of the rectangle that has sides A and B.*/


#include<stdio.h>
#include<math.h>
#define pi 3.14159
int main()
{
	double A,B,C,a,b,c,d,e;
	scanf("%lf %lf %lf",&A,&B,&C);
	a=.5*A*C;
	b=pi*pow(C,2);
	c=(A+B)/2*C;
	d=pow(B,2);
	e=A*B;
	printf("TRIANGULO: %.3f\n",a);
	printf("CIRCULO: %.3f\n",b);
	printf("TRAPEZIO: %.3f\n",c);
	printf("QUADRADO: %.3f\n",d);
	printf("RETANGULO: %.3f\n",e);
	return 0;
}
