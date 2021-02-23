#include <stdio.h>
main ()
{
	int a,b,t;
	printf("Enter the value of a and b.\n");
	scanf("%d%d", &a,&b);
	t=a;
	a=b;
	b=t;
	printf("The values of a and b are %d and %d", a,b);
	return 0;
}
