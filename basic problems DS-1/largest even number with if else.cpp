#include<stdio.h>

void main()
{
	int a, b, c, largest_even_num;
	printf("Please enter three number:");

	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	

	if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0)
	{
		if (a % 2 == 0) {
			if (b % 2 == 0)
			{
				a > b ? largest_even_num = a : largest_even_num = b;
			}
			else if (c % 2 == 0) {
				a > c ? largest_even_num = a : largest_even_num = c;
			}
			else largest_even_num = a;
		}
		else if (b % 2 == 0)
		{
			if (c % 2 == 0)
				b > c ? largest_even_num = b : largest_even_num = c;
			else largest_even_num = b;
		}
		else {
			if(c%2==0)
			largest_even_num = c;
		}
		printf("largest even number is %d", largest_even_num);
	}
	else printf("No no even number found.");

}