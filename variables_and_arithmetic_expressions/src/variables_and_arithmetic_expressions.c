/*
 ============================================================================
 Name        : variables_and_arithmetic_expressions.c
 Author      : Mateusz Posadowski
 Version     :
 Copyright   : Your copyright notice
 Description : C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Variables and arithmetic expressions!!!\n");
	float fahr, celsuis;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("Fahrenheit\tCelsuis\n");
	while(fahr <= upper){
		celsuis = 5.0/ 9.0 * (fahr-32.0);
		printf("%3.0f\t%6.1f\n",fahr,celsuis);
		fahr = fahr + step;
	}
	printf("------------\t-------------\n");
	printf("Celsuis\tFahrenheit\n");

	celsuis = lower;
	while(celsuis <= upper){
		fahr = 32.0 + 9.0 / 5.0 * celsuis;
		printf("%3.0f\t%6.1f\n",celsuis,fahr);
		celsuis = celsuis + step;
	}
	return EXIT_SUCCESS;
}
