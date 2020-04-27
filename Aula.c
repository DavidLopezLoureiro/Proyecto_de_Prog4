/*
 * Aula.c
 *
 *  Created on: 26 mar. 2020
 *      Author: Xabier
 */


#include "Aula.h"
#include "Asignatura.h"

void reserva (Aula *aula, int dia, int hora, Asignatura asig){


	if(aula->ocupadapor[dia][hora].creditos == 0){

		aula->ocupadapor[dia][hora] = asig;

	}else{

		printf("Ocupada.");
	}


}

void quitaReserva(Aula *aula, int dia, int hora, Asignatura asig){

	if(aula->ocupadapor[dia][hora].creditos != 0){

			aula->ocupadapor[dia][hora] = asig;

		}else{

			printf("Esta libre.");
		}



}

