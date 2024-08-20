/*Read three values (variables A, B and C), which are the three student's grades.
Then, calculate the average, considering that grade A has weight 2, grade B has weight 3 and the grade C has weight 5.
Consider that each grade can go from 0 to 10.0, always with one decimal place.*/



#include<stdio.h>
    int main()
    {
        double A,B,C,x;
        scanf("%lf %lf %lf", &A,&B,&C);
        x=(A*2+B*3+C*5)/(2+3+5);
        printf("MEDIA = %.1f\n",x);
        return 0;
    }
