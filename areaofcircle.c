#include <stdio.h>

main()
{
	float radius, area;
	printf("Radius = ? ");
	scanf("%f", &radius);
	area = 3.1459 * radius * radius;
	printf("Area = %f", area);
}