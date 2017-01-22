/****************************************************************************
* Fichier: Specialite.cpp
* Auteur: Pierre-Olivier C�t�
* Auteur: J�r�mie Hupp�	1854753
* Date: 31 janvier 2017
* Description: Implementation de la classe Specialite
****************************************************************************/

#include "Specialite.h"

/****************************************************************************
* Fonction:	Specialite::Specialite
* Description: Constructeur par defaut
* Param�tres:	aucun
* Retour:		aucun
****************************************************************************/
Specialite::Specialite() {
	domaine_ = "";
	niveau_ = 0;
}

/****************************************************************************
* Fonction:	Specialite::Specialite
* Description: Constructeur par parametres
* Param�tres:	string [IN], int [IN].
* Retour:		aucun
****************************************************************************/
Specialite::Specialite(string domaine, int niveau) {
	domaine_ = domaine;
	niveau_ = niveau;
}

/****************************************************************************
* Fonction:	Specialite::getDomaine
* Description: Retourne le contenu de la variable priv�e domaine_
* Param�tres:	aucun
* Retour:		string [OUT]
****************************************************************************/
string Specialite::getDomaine() const {
	return domaine_;
}

/****************************************************************************
* Fonction:	Specialite::getNiveau
* Description: Retourne le contenu de la variable priv�e niveau_
* Param�tres:	aucun
* Retour:		int [OUT]
****************************************************************************/
int Specialite::getNiveau() const {
	return niveau_;
}

/****************************************************************************
* Fonction:	Tableau::setDomaine
* Description: Definit le contenu de la variable priv�e domaine_
* Param�tres:	string [IN]
* Retour:		aucun
****************************************************************************/
void Specialite::setDomaine(string domaine) {
	domaine_ = domaine;
}

/****************************************************************************
* Fonction:	Tableau::setNiveau
* Description: Definit le contenu de la variable priv�e niveau_
* Param�tres:	int [IN]
* Retour:		aucun
****************************************************************************/
void Specialite::setNiveau(int niveau) {
	niveau_ = niveau;
}