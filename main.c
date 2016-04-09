#include <stdio.h>

double pi (void);

int main (void) {
	printf("Valor de PI: %f\n", pi());
}

double pi (void) {

	double valor_pi = 0.0;
	double x,y = 0;

	for(x = 1; x <= 100000001; x += 2)
		if(x == 1 || y == 4){
			valor_pi += (4/x);
			y = 2;
		} else {
			valor_pi -= (4/x);
			y += 2;
		}

	return valor_pi;
}