#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    char nomfich[21];
    int num,i;
	float acum=0.0;
	char *salida;
    FILE *fsalida;
    if (argc==3){
        printf("Llenando datos \n");
	} else {
        printf("Para emplear este comando usa  pes2 <nombre del archivo> <numero de elementos> \n");
        return 1;
    }
	acum=0;
    num = atoi(argv[2]);
	salida = argv[1];
    fsalida= fopen(salida, "ab");
    for(i=1;i<=num;i++) {
	    acum = acum + i;
		//fprintf(fsalida, "%d, ",i);  // Esta linea al estar comentada ya no se ejecuta
    }
	fprintf(fsalida, "Acum es %f  num es %d y El promedio es %f, ",acum,num,(acum/num));
	
    fclose(fsalida);
}