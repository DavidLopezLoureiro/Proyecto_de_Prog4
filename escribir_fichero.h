#include <stdio.h>

#define MAX_NUM 10


void escribirfichero(){
	FILE* f;
        int c;

	//abrir fichero para escritura "w"
	f = fopen("prueba.txt", "w");

	//escribir en fichero un string formateado
	fprintf(f, "Escribiendo %i números\n", MAX_NUM);
	for (c = 0; c < MAX_NUM; c++)
		fprintf(f, "%i\n", c);

	//cerrar fichero
	fclose(f);

}
