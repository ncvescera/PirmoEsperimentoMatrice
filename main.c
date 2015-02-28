/* 
 * File:   main.c
 * Author: Studenti
 *
 * Created on 28 febbraio 2015, 8.38
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int nrighe=3;
    int ncolonne=4;
    int matrice[nrighe][ncolonne];
    int righe,colonne;
    int numero=0;
    int ris;
    for(righe=0;righe<nrighe;righe++){
        for(colonne=0;colonne<ncolonne;colonne++){
            printf("Inserisci un numero che andrà nella riga %d e nella colonna %d: ",righe,colonne);
            scanf("%d",&(matrice[righe][colonne]));
        }
    }
    for(righe=0;righe<nrighe;righe++){
        for(colonne=0;colonne<ncolonne;colonne++){
            printf("riga %d & colonne %d = %d\n",righe,colonne,matrice[righe][colonne]);
        }
    }
    ris=matrice[2][0];
            printf("aaaaaaa %d",ris);
    return (EXIT_SUCCESS);
}

