/*
 * Asignatura.c
 *
 *  Created on: 26 mar. 2020
 *      Author: Xabier
 */


#include "Asignatura.h"



Asignatura matricular(Asignatura asig, Alumno alum, int cant){

		asig.alumnos[cant] = alum;

		return asig;

}
