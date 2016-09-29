#include "stdio.h"

int main()
{
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	printf("%s", (a > b || a > c || a > d) ? "N" : "S");
	return 0;
}
