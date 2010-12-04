#ifndef	BINCONVERTER_H
#define BINCONVERTER_H

#include	<stdio.h>
#include	<stdlib.h>
#include	<LIMITS.H>

/*
 * Effectue la conversion binaire et la stock dans <binaire> (dont la taille est modifi�e)
 */
void binconverter ( unsigned int dec, char * binaire);
/*
 * Effectue la conversion binaire � l'envers et l'affiche � l'�cran
 */
void binconverterRevert ( unsigned int dec );

/*	Renvoie la plus grande puissance de 2 utilis�e dans un nombre
 *	dec : valeur decimale
 */
unsigned int maxpow2( unsigned int dec );
/*	Renvoie la position d'un bit dans un mot (exemple posbit(8) = 4)
 *	dec : valeur decimale
 */
unsigned int posbit( unsigned int dec );

#endif
