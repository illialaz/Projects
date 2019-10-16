#include <stdio.h>
int main()
{
	int lower = 0, upper = 300, step = 10;
	float fahr, celsius = lower;
	printf ("Celsius/Fahr\n");
	while (celsius <= upper) {
		fahr = ((9.0 * celsius) / 5.0) + 32;
		printf ("%3.0f%6.1f\n", celsius, fahr);
		celsius += step;
	}
	return 0;
}

