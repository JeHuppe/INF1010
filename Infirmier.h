/****************************************************************************
* Fichier: Infirmier.h
* Auteur: Pierre-Olivier Côté
* Auteur: Jérémie Huppé	1854753
* Date: 31 janvier 2017
* Description: Definition de la classe Infirmier
****************************************************************************/

#ifndef INFIRMIER_H
#define INFIRMIER_H

#include <iostream>
#include <string>

using namespace std;

class Infirmier
{
public:
	// Constructeurs par defaut et par parametre
	Infirmier();
	Infirmier(string nom, string prenom, int nbChambres);

	// Methodes d'acces
	string getNom() const;
	string getPrenom() const;
	int getNbChambres() const;

	// Methodes de modification

	void setNom(string nom);
	void setPrenom(string prenom);
	void setNbChambres(int nbChambres);

	//Affichage					////J'AI AJOUTÉ
	void afficher() const;

private:
	// Variables privees
	string nom_;
	string prenom_;
	int nbChambres_;
};

#endif
