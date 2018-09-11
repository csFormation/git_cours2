/*
 ============================================================================
 Name        : Jeu.c
 Author      : Miguel
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ATTEMPTS 10
#define MAX_NUMBER 1000
#define MIN_NUMBER 1

int main( void ) {

	int num, i, nbInsere;

	printf( "\n You have %d attempts to know which number between %d and %d I am thinking of\n", MAX_ATTEMPTS, MIN_NUMBER, MAX_NUMBER );

	srand( time( NULL ) );
	num = MIN_NUMBER + rand() % ( MAX_NUMBER + 1 - MIN_NUMBER);  //variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;

	for ( i = 1; i <= MAX_ATTEMPTS; i++ ) {
		printf("\n Enter the %d attempt: ", i );
		scanf( "%d", &nbInsere );
        
		if ( nbInsere > num )
        	printf( " Sorry, %d is greater than num\n", nbInsere );
    	else if ( nbInsere < num )
         	printf(" Sorry, %d is less than num\n", nbInsere);
   	 	else {
	    	printf(" Bravo, you win!!\n");
        	break;
    	}		
	}
	
	printf( "\n Number to figure out was: %d\n\n", num );	
	return EXIT_SUCCESS;
}
