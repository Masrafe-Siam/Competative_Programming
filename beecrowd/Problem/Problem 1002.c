/*The formula to calculate the area of a circumference is defined as A = π . R2. Considering to this problem that π = 3.14159:
Calculate the area using the formula given in the problem description.*/



#include<stdio.h>
#define n 3.14159
    int main()
    {
        double R,A;
        scanf("%lf", &R);
        A = n * R * R;
        printf("A=%.4lf\n", A);
        return 0;
    }
