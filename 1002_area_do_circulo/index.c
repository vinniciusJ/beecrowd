#include <stdio.h>
#include <math.h>

int main(){
	float PI = 3.14159;
	float radius = 0.0;

	scanf("%f", &radius);

	float area = PI * pow(radius, 2);

	printf("A=%.4f\n", area);

	return 0;
}
