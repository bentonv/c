#include <stdio.h>

#define PI 3.14159

float process (float radius);  /*function prototype to move out the main process into a new function */

main()
{
	float radius, area;
	printf("Radius = ? ");
	scanf("%f", &radius);
	
	if(radius < 0)
	{
		area = 0;
	}
	else
	{
		area = process(radius);
	}
	printf("Area = %f", area);
}

/*accepts a floating point as an argument
* float a will be where the final result will be held
* constant PI multiplied by r squared
*/
float process(float r)	
{
	float a;
	a = PI * r * r;
	return(a);
}

