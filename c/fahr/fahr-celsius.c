#include <stdio.h>
int main()
{
	int lower = 0, upper = 100, step = 10;
	float fahr = lower, celsius;
	printf ("Fahr / Celsius\n");
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32);
		printf ("%3.0f%6.1f\n", fahr, celsius);
		fahr += step;
	}
}
