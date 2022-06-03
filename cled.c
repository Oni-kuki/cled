#include "stm32f10x.h"

/*****************************************************************
Preambule : indiquez ici les periopheriques que vous avez utilisez
*****************************************************************/

// GPIOA   : broche 6 pour controler la LED verte
// GPIOC : broche 13 pour detecter l'appui du bouton


/*****************************************************************
Declaration des fonctions��
*****************************************************************/
int rand(void);
void configure_gpio_pa5(void) ;
void configure_gpio_pc13(void) ;
void set_gpio(GPIO_TypeDef *GPIO, int n) ;
void reset_gpio(GPIO_TypeDef *GPIO, int n) ;
void configure_timer(TIM_TypeDef *TIM, int psc, int arr) ;
void configure_it(void) ;
void start_timer(TIM_TypeDef *TIM) ;
void stop_timer(TIM_TypeDef *TIM) ;

/*****************************************************************
Varibales globales
 *****************************************************************/

/*****************************************************************
MAIN
*****************************************************************/

int main(void){
	
    // Configuration des ports d'entree/sortie
	configure_gpio_pa5();
	configure_gpio_pc13();
    // Ecrire la suite du code
    
    // Boucle d'attente du processeur
	while (1);
    
	return 0;
}

/*****************************************************************
Corps des fonctions
*****************************************************************/

/**
Configure la broche 5 du port A (led verte)
*/
void configure_gpio_pa5(void){

}

/**
Configure la broche 13 du port C (bouton USER) 
*/
void configure_gpio_pc13(void) {

}

/**
Met a 1 la broche n du port GPIO
*/
void set_gpio(GPIO_TypeDef *GPIO, int n) {

}

/**
Met a 0 la broche n du port GPIO
*/
void reset_gpio(GPIO_TypeDef *GPIO, int n) {

}

/**
Configure la periode du timer TIM en fonction des parametres
psc (prescaler) et arr (autoreload) sans lancer le timer
*/
void configure_timer(TIM_TypeDef *TIM, int psc, int arr) {

}

/**
Demarre le timer TIM
*/
void start_timer(TIM_TypeDef *TIM) {

}

/**
Arrete le timer TIM
*/
void stop_timer(TIM_TypeDef *TIM) {

}

/**
Configure toutes les interruptions du systeme
*/
void configure_it(void) {

}

/*****************************************************************
Fonctions d'interruption
*****************************************************************/


/*****************************************************************
Fonctions pre-definies
*****************************************************************/

/**
Retourne une valeur entiere aleatoire comprise entre 800 et 1800
*/
int rand(){
	static int randomseed = 0;
	randomseed = (randomseed * 9301 + 49297) % 233280;
	return 800 + (randomseed % 1000);
}
