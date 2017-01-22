/****************************************************************************
* Fichier: Infirmier.cpp
* Auteur: Pierre-Olivier Côté
* Auteur: Jérémie Huppé	1854753
* Date: 31 janvier 2017
* Description: Implementation de la classe Infirmier
****************************************************************************/

#include "Infirmier.h"

/****************************************************************************
* Fonction:	Infirmier::Infirmier
* Description: Constructeur par defaut
* Paramètres:	aucun
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
* Paramètres:	string [IN], string [IN], int [IN].
* Retour:		aucun
****************************************************************************/
Infirmier::Infirmier(string nom, string prenom, int nbChambres) {
	nom_ = nom;
	prenom_ = prenom;
	nbChambres_ = nbChambres;
}

/****************************************************************************
* Fonction:	Infirmier::getNom
* Description: Retourne le contenu de la variable privée nom_
* Paramètres:	aucun
* Retour:		string [OUT]
****************************************************************************/
string Infirmier::getNom() const {
	return nom_;
}

/****************************************************************************
* Fonction:	Infirmier::getPrenom
* Description: Retourne le contenu de la variable privée prenom_
* Paramètres:	aucun
* Retour:		string [OUT]
****************************************************************************/
string Infirmier::getPrenom() const {
	return prenom_;
}

/****************************************************************************
* Fonction:	Infirmier::getNbChambres
* Description: Retourne le contenu de la variable privée nbChambres_
* Paramètres:	aucun
* Retour:		int [OUT]
****************************************************************************/
int Infirmier::getNbChambres() const {
	return nbChambres_;
}

/****************************************************************************
* Fonction:	Infirmier::setNom
* Description: Definit le contenu de la variable privée nom_
* Paramètres:	string [IN]
* Retour:		aucun
****************************************************************************/
void Infirmier::setNom(string nom) {
	nom_ = nom;
}

/****************************************************************************
* Fonction:	Infirmier::setPrenom
* Description: Definit le contenu de la variable privée prenom_
* Paramètres:	string [IN]
* Retour:		aucun
****************************************************************************/
void Infirmier::setPrenom(string prenom) {
	prenom_ = prenom;
}

/****************************************************************************
* Fonction:	Infirmier::setNbChambres
* Description: Definit le contenu de la variable privée nbChambres_
* Paramètres:	int [IN]
* Retour:		aucun
****************************************************************************/
void Infirmier::setNbChambres(int nbChambres) {
	nbChambres_ = nbChambres;
}

/****************************************************************************
* Fonction:	Infirmier::afficher
* Description: Affiche le contenu d'un Infirmier
* Paramètres:	aucun
* Retour:		aucun
****************************************************************************/
void Infirmier::afficher() const {
	cout << "|      " << nom_ << "        |      " << prenom_ << "        |            " << nbChambres_ << "               |" << endl;
}
