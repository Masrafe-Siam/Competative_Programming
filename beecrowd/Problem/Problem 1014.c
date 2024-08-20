/*Calculate a car's average consumption being provided the total 
distance traveled (in Km) and the spent fuel total (in liters).*/


#include<stdio.h>
int main()
{
	int x;
	float y,dis;
	scanf("%d %f",&x,&y);
	dis=x/y;
	printf("%.3f km/l\n",dis);
	return 0;
}
