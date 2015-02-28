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
    const int nrighe=4;
    const int ncolonne=4;
    int scambia[ncolonne];
    int matrice[nrighe][ncolonne];
    int righe,colonne;
   

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
    printf("\n");
    int i;
    for(i=1;i<nrighe;i+=2){
        for(colonne=0;colonne<nrighe;colonne++){
            scambia[colonne]=matrice[i][colonne];
            matrice[i][colonne]=matrice[i-1][colonne];
            matrice[i-1][colonne]=scambia[colonne];
            
        }
        
    }
    for(righe=0;righe<nrighe;righe++){
        for(colonne=0;colonne<ncolonne;colonne++){
            printf("riga %d & tcolonne %d = %d\n",righe,colonne,matrice[righe][colonne]);
        }
    }
            
    return (EXIT_SUCCESS);
}

