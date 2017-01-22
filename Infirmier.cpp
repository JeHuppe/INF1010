/****************************************************************************
* Fichier: Infirmier.cpp
* Auteur: Pierre-Olivier C�t�
* Auteur: J�r�mie Hupp�	1854753
* Date: 31 janvier 2017
* Description: Implementation de la classe Infirmier
****************************************************************************/

#include "Infirmier.h"

/****************************************************************************
* Fonction:	Infirmier::Infirmier
* Description: Constructeur par defaut
* Param�tres:	aucun
* Retour:		aucun
****************************************************************************/
Infirmier::Infirmier() {
	nom_ = "";
	prenom_ = "";
	nbChambres_ = 0;
}

/****************************************************************************
* Fonction:	Infirmier::Infirmier
* Description: Constructeur par parametres
* Param�tres:	string [IN], string [IN], int [IN].
* Retour:		aucun
****************************************************************************/
Infirmier::Infirmier(string nom, string prenom, int nbChambres) {
	nom_ = nom;
	prenom_ = prenom;
	nbChambres_ = nbChambres;
}

/****************************************************************************
* Fonction:	Infirmier::getNom
* Description: Retourne le contenu de la variable priv�e nom_
* Param�tres:	aucun
* Retour:		string [OUT]
****************************************************************************/
string Infirmier::getNom() const {
	return nom_;
}

/****************************************************************************
* Fonction:	Infirmier::getPrenom
* Description: Retourne le contenu de la variable priv�e prenom_
* Param�tres:	aucun
* Retour:		string [OUT]
****************************************************************************/
string Infirmier::getPrenom() const {
	return prenom_;
}

/****************************************************************************
* Fonction:	Infirmier::getNbChambres
* Description: Retourne le contenu de la variable priv�e nbChambres_
* Param�tres:	aucun
* Retour:		int [OUT]
****************************************************************************/
int Infirmier::getNbChambres() const {
	return nbChambres_;
}

/****************************************************************************
* Fonction:	Infirmier::setNom
* Description: Definit le contenu de la variable priv�e nom_
* Param�tres:	string [IN]
* Retour:		aucun
****************************************************************************/
void Infirmier::setNom(string nom) {
	nom_ = nom;
}

/****************************************************************************
* Fonction:	Infirmier::setPrenom
* Description: Definit le contenu de la variable priv�e prenom_
* Param�tres:	string [IN]
* Retour:		aucun
****************************************************************************/
void Infirmier::setPrenom(string prenom) {
	prenom_ = prenom;
}

/****************************************************************************
* Fonction:	Infirmier::setNbChambres
* Description: Definit le contenu de la variable priv�e nbChambres_
* Param�tres:	int [IN]
* Retour:		aucun
****************************************************************************/
void Infirmier::setNbChambres(int nbChambres) {
	nbChambres_ = nbChambres;
}

/****************************************************************************
* Fonction:	Infirmier::afficher
* Description: Affiche le contenu d'un Infirmier
* Param�tres:	aucun
* Retour:		aucun
****************************************************************************/
void Infirmier::afficher() const {
	cout << "|      " << nom_ << "        |      " << prenom_ << "        |            " << nbChambres_ << "               |" << endl;
}
