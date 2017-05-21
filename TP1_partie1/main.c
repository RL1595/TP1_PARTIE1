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
#define PILE 3
#define FACE 7
#define NB_ESSAIS 3

//Prototypes
int valeur_aleatoire(int min, int max);
int generer_suite(int mn, int mx);
void afficher_resultats(int suite);

//Programme principal
int main(void){
    
    //Déclaration des variables
    int minimum = 0;
    int maximum = 1;
    int suite;
    
    srand(time(NULL));
    
    suite = generer_suite(minimum, maximum);
    afficher_resultats(suite);
    
    return EXIT_SUCCESS;
}

int valeur_aleatoire(int min, int max){
    
    //Déclaration des variables du sous-programme valeur_aleatoire
    int valeur_alea;
    
    valeur_alea = (rand() % (max + 1 - min)) + min;
    
    if (valeur_alea == 0){
        valeur_alea = PILE;
    }
    else{
        valeur_alea = FACE;
    }
    return valeur_alea;
}

int generer_suite(mn, mx){
    
    //Déclaration des variables du sous-programme generer_suite
    int suite = 0;
    
    for(int i = 0; i < 3; i++){
        suite *= 10;
        suite += valeur_aleatoire(mn, mx);
    }
    
    return suite;
    
}

void afficher_resultats(int suite){
    
    printf("%d\n", suite);
    
}



