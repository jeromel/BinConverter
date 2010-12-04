#include	"binconverter.h"

void binconverterRevert ( unsigned int dec ) {
	do
	{
		printf("%u", dec%2);
	}
	while( (dec = dec >>1) );
	putchar('\n');
}

void binconverter ( unsigned int dec, char * binaire ) {
	unsigned int mp2 = maxpow2(dec);
	unsigned int pbit = posbit(mp2);
	unsigned int poschar = pbit-1;
	if ( binaire != NULL ) {
		realloc(binaire, sizeof(char)*pbit);

		do
		{
			binaire[poschar] = '0'+(dec%2);
			--poschar;
		}
		while ( (dec = dec >> 1) );

		binaire[pbit]='\0';
	}
}

unsigned int maxpow2( unsigned int dec ) {
	unsigned int maxpow2 = 1;

	while ( dec > 1 ) {
		maxpow2 = maxpow2 << 1;
		dec = dec >> 1;
	}

	return maxpow2;
}

unsigned int posbit( unsigned int dec ) {
	unsigned int posbit = 1;

	while ( dec > 1) {
		dec = dec >> 1;
		++posbit;
	}

	return posbit;
}
