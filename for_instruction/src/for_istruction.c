/*
 ============================================================================
 Name        : for_istruction.c
 Author      : Mateusz Posadowski
 Version     :
 Copyright   : Your copyright notice
 Description : for instruction, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("for instruction"); /* prints for_instruction */

	int fahr;

	for(fahr = 300; fahr >= 0;fahr-=20){

		printf("%3d %6.1f\n", fahr, (5.0/9.0)*((fahr)-32));
	}
	return EXIT_SUCCESS;
}
