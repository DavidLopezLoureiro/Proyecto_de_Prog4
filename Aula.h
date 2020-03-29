/*
 * Aula.h
 *
 *  Created on: 25 mar. 2020
 *      Author: david
 */

#ifndef AULA_H_
#define AULA_H_

#include "Asignatura.h"
#include "Profesor.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct{

	char codigo;
	int tamanyoMax;
	Asignatura ocupadapor[5][6];

}Aula;

void reserva (Asignatura *puntero[5][6], int dia, int hora, Asignatura asig);
void quitaReserva(Asignatura *puntero[5][6], int dia, int hora, Asignatura asig);

// M�todo de visualizaci�n de horarios C++
// M�todo de visualizac�on de reservas C++
// M�todo de visualizaci�n de clasesLibres C++

#endif /* AULA_H_ */
