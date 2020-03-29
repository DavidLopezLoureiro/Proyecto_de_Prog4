/*
 * Aula.c
 *
 *  Created on: 26 mar. 2020
 *      Author: Xabier
 */


#include "Aula.h"
#include "Asignatura.h"
void reserva (Asignatura *puntero[5][6], int dia, int hora, Asignatura asig){


	if(puntero[dia][hora]==NULL){
	*puntero[dia][hora]=asig;
	}
	else{
	printf("Ocupada.");
	}
}


