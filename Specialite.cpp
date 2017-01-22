/****************************************************************************
* Fichier: Specialite.cpp
* Auteur: Pierre-Olivier Côté
* Auteur: Jérémie Huppé	1854753
* Date: 31 janvier 2017
* Description: Implementation de la classe Specialite
****************************************************************************/

#include "Specialite.h"

/****************************************************************************
* Fonction:	Specialite::Specialite
* Description: Constructeur par defaut
* Paramètres:	aucun
* Retour:		aucun
****************************************************************************/
Specialite::Specialite() {
	domaine_ = "";
	niveau_ = 0;
}

/****************************************************************************
* Fonction:	Specialite::Specialite
* Description: Constructeur par parametres
* Paramètres:	string [IN], int [IN].
* Retour:		aucun
****************************************************************************/
Specialite::Specialite(string domaine, int niveau) {
	domaine_ = domaine;
	niveau_ = niveau;
}

/****************************************************************************
* Fonction:	Specialite::getDomaine
* Description: Retourne le contenu de la variable privée domaine_
* Paramètres:	aucun
* Retour:		string [OUT]
****************************************************************************/
string Specialite::getDomaine() const {
	return domaine_;
}

/****************************************************************************
* Fonction:	Specialite::getNiveau
* Description: Retourne le contenu de la variable privée niveau_
* Paramètres:	aucun
* Retour:		int [OUT]
****************************************************************************/
int Specialite::getNiveau() const {
	return niveau_;
}

/****************************************************************************
* Fonction:	Tableau::setDomaine
* Description: Definit le contenu de la variable privée domaine_
* Paramètres:	string [IN]
* Retour:		aucun
****************************************************************************/
void Specialite::setDomaine(string domaine) {
	domaine_ = domaine;
}

/****************************************************************************
* Fonction:	Tableau::setNiveau
* Description: Definit le contenu de la variable privée niveau_
* Paramètres:	int [IN]
* Retour:		aucun
****************************************************************************/
void Specialite::setNiveau(int niveau) {
	niveau_ = niveau;
}