/****************************************************************************
* Fichier: Medecin.h
* Auteur: Pierre-Olivier Côté
* Auteur: Jérémie Huppé	1854753
* Date: 31 janvier 2017
* Description: Definition de la classe Medecin
****************************************************************************/

#ifndef MEDECIN_H
#define MEDECIN_H

#include <iostream>
#include <string>

using namespace std;

#include "Specialite.h"


class Medecin
{
public:
	// Constructeurs par defaut et par parametre
	Medecin();
	Medecin(string nom, int horaires, Specialite* uneSpecialite);

	// Methodes d'acces			////J'AI AJOUTÉ LES "const"
	string obtenirNom() const;
	int obtenirHoraires() const;
	Specialite obtenirSpecialite() const;

	// Methodes de modification
	void modifierNom(string nom);
	void modifierHoraires(int horaires);
	void modifierSpecialite(Specialite *specialite);

	//Affichage					////J'AI AJOUTÉ
	void afficher() const;
	
private:

	// Variables privees
	string nom_;
	int horaires_;
	Specialite* specialite_;
};

#endif
