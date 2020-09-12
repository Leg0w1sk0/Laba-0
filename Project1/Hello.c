#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Input a\n");
	scanf("%d", & a);
	printf("Input b\n");
	scanf("%d", & b);
	printf("Input c\n");
	scanf("%d", & c);
	printf("Sum of b and c\n");
	printf("%d + %d = %d\n", b, c, b + c);
	// вывести на жкран отношение произведения второго и первого числа и третьего и первого
	float f;
	f = (float)(b * a) / (c * a);
	printf("(b * a) / (c * a)\n");
	if (a == 0 || c == 0) {
		printf("ERROR (c * a) = 0");
	}
	else
	{
		printf("(%d * %d) / (%d * %d) = %f", b, a, c, a, f);
	}
	return 0;
}
