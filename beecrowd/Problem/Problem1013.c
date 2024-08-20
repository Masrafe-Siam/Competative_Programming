//Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior".


#include<stdio.h>
int main()
{
	int a,b,c,s;
         scanf("%d %d %d", &a, &b, &c);
         s = a;
         if(a < b || a < c){
             if(b < c){
             s = c;
             }
         else{
               s = b;
            }
        }
        printf("%d eh o maior\n", s);
	return 0;
}
