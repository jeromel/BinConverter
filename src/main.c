#include	<stdio.h>
#include	<stdlib.h>
#include	"binconverter.h"

int	main(void) {

	unsigned int num = 0;
	char * binaire;
	binaire = (char *) malloc(sizeof(char)*1);
	printf("UINT_MAX : %u\n\n", UINT_MAX);
	while ( scanf("%u", &num) ) {
		binconverterRevert(num);
		binconverter( num, binaire );
		printf("(%u)b2 =  %s\tmp2(%u) = %u\tpbit(mp2(%u)) = %u\n", num, binaire, num, maxpow2(num), num, posbit(maxpow2(num)));
	}


	return EXIT_SUCCESS;

}
