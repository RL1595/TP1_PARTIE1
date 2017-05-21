/*
 *Travail pratique 1, partie 1
 *@Roxane Lupien
 *@18/05/17
 *Dernière modification le 18/05/17
 */

//Commandes pré-processeur
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

//Prototypes
int valeur_aleatoire(int min, int max);
void afficher_resultats(int resultat);

//Programme principal
int main(void){
    
    //Déclaration des variables
    int minimum = 3;
    int maximum = 7;
    
    int resultat = valeur_aleatoire(minimum, maximum);
    afficher_resultats(resultat);
    
    return EXIT_SUCCESS;
}

int valeur_aleatoire(int min, int max){
    
    //Déclaration des variables du sous-programme
    int resultat;
    
    do{
        srand(time(NULL));
        resultat = (rand() % (max + 1 - min)) + min;
    }
    while(resultat != 3 || resultat != 7);
        
    scanf("%d", &resultat);
    
        return resultat;
}

void afficher_resultats(int resultat){
    
    if(resultat == 3){
        printf("pile");
    }
    else if(resultat == 7){
        printf("face");
    }
}

