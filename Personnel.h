/****************************************************************************
* Fichier: Personnel.h
* Auteur: Pierre-Olivier Côté
* Auteur: Jérémie Huppé	1854753
* Date: 31 janvier 2017
* Description: Definition de la classe Personnel
****************************************************************************/

#ifndef PERSONNEL_H
#define PERSONNEL_H

#include <string>
#include <iostream>

using namespace std;

#include "Medecin.h"
#include "Infirmier.h"

class Personnel
{
public:
	// Constructeur par defaut
	Personnel();

	// Destructeur
	~Personnel();

	// Methodes publiques
	void ajouterMedecin(Medecin& unMedecin);		
	void ajouterInfirmier(Infirmier& unInfirmier);	

	void afficherMedecins() const;					//J'ai ajouté "const"
	void afficherInfirmiers() const;				//J'ai ajouté "const"

private:
	// Variables privees
	Medecin*   tableauMedecins_;
	Infirmier* tableauInfirmiers_;

	unsigned int compteurMedecin_;
	unsigned int compteurInfirmier_;

	unsigned int capaciteTableauMedecins_;
	unsigned int capaciteTableauInfirmiers_;
	
};

#endif
