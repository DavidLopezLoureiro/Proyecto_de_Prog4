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

	char codigo[3];
	int tamanyoMax;
	Asignatura ocupadapor[5][6];

}Aula;

void reserva (Aula *aula, int dia, int hora, Asignatura asig);
void quitaReserva(Aula* aula, int dia, int hora, Asignatura asig);


// Método de visualización de horarios C++
// Método de visualizacíon de reservas C++
// Método de visualización de clasesLibres C++

#endif /* AULA_H_ */
