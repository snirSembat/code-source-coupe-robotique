Utilisation :



	Insérez dans votre programme principal:

#include "Chrono.hpp"



	Créer un objet Chronomètre:

Chrono NomDuChrono;



	Fonction start:

NomDuChrono.start();


	Fonction stop:

NomDuChrono.stop();


	Fonction reset:

NomDuChrono.reset();


	Obtenir le temps écoulé (en secondes):

NomDuChrono.getTempsEcoule()


	Obtenir le temps restant (en secondes):

NomDuChrono.getTempsRestant()


	Verifier si le match est finis et bloquer le programme:
	
NomDuChrono.veriFinMatch();