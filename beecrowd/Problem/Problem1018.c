/*In this problem you have to read an integer value and calculate the smallest possible number of banknotes in which the value may be decomposed.
The possible banknotes are 100, 50, 20, 10, 5, 2 e 1.Print the read value and the list of banknotes.*/


#include<stdio.h>
int main()
{
	int amount,left;
	scanf("%d",&amount);
	printf("%d\n",amount);
	int hundred=amount/100;
	printf("%d nota(s) de R$ 100,00\n",hundred);
	left=amount%100;
	int fifty=left/50;
	printf("%d nota(s) de R$ 50,00\n",fifty);
	left=left%50;
	int twenty=left/20;
	printf("%d nota(s) de R$ 20,00\n",twenty);
	left=left%20;
	int ten=left/10;
	printf("%d nota(s) de R$ 10,00\n",ten);
	left=left%10;
	int five=left/5;
	printf("%d nota(s) de R$ 5,00\n",five);
	left=left%5;
	int two=left/2;
	printf("%d nota(s) de R$ 2,00\n",two);
	left=left%2;
	int one=left/1;
	printf("%d nota(s) de R$ 1,00\n",one);
	return 0;
}
