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
#define PILE_FACE_FACE 377
#define FACE_FACE_PILE 773
#define PILE_PILE_FACE 337
#define PILE_FACE_PILE 373
#define FACE_PILE_FACE 737

//Déclaration des prototypes
int generer_suite(int mn, int mx);
void afficher_resultats(int suite);
int affirmation_1(int min, int max);
//int affirmation_2(int min, int max);
//int affirmation_3(int min, int max);
//int valeur_aleatoire(int min, int max);

//Programme principal
int main(void){
    
    //Déclaration des variables
    int minimum = 0;
    int maximum = 1;
    int suite;
    
    srand(time(NULL));
    
    
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

int generer_suite(int min, int max){
    
    //Déclaration des variables du sous-programme generer_suite
    int suite = 0;
    
    for(int i = 0; i < 3; i++){
        suite *= 10;
        suite += valeur_aleatoire(min, max);
    }
    
    return suite;
    
}

void afficher_resultats(){
    
    printf("*** AFFIRMATION 1 ***\n\n");
    printf("Nombre de simulations effectuees : %d", NB_ESSAIS);
    printf("Nombre de fois que la premiere suite est venue avant la seconde : %d",);
    printf("Probabilité que la premiere suite vienne avant la seconde : %d",);
    
}

int affirmation_1(int min, int max){
    
    //Déclaration des variables du sous-programme affirmation_1
    int i = 0;
    int suite;
    int suite_pile_face_face;
    
    for(i = 0; i < NB_ESSAIS; i++){
        
        do{
            suite = generer_suite(min, max);
        }
        while(suite != PILE_FACE_FACE || suite != FACE_FACE_PILE);
        
        if(suite == PILE_FACE_FACE){
            
            suite_pile_face_face += 1;
        }
    }
    return suite_pile_face_face;
}

int affirmation_2(int min, int max){
    
    //Déclaration des variables du sous-programme affirmation_2
    int i = 0;
    int suite;
    int suite_pile_pile_face;
    
    for(i = 0; i < NB_ESSAIS; i++){
        
        do{
            suite = generer_suite(min, max);
        }
        while(suite != PILE_PILE_FACE || suite != PILE_FACE_PILE);
        
        if(suite == PILE_PILE_FACE){
            
            suite_pile_pile_face += 1;
        }
    }
    return suite_pile_pile_face;
}

int affirmation_3(int min, int max){
    
    //Déclaration des variables du sous-programme affirmation_3
    int i = 0;
    int suite;
    int suite_face_pile_face;
    
    for(i = 0; i < NB_ESSAIS; i++){
        do{
            suite = generer_suite(min, max);
        }
        while(suite != FACE_PILE_FACE || suite != PILE_FACE_FACE);
        
        if(suite == FACE_PILE_FACE){
            
            suite_face_pile_face += 1;
        }
    }
    return suite_face_pile_face;
}

