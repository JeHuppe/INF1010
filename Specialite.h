/****************************************************************************
* Fichier: Specialite.h
* Auteur: Pierre-Olivier Côté
* Auteur: Jérémie Huppé	1854753
* Date: 31 janvier 2017
* Description: Definition de la classe Specialite
****************************************************************************/

#ifndef SPECIALITE_H
#define SPECIALITE_H

#include <string>
#include <iostream>

using namespace std;

class Specialite
{
public:
	// Constructeurs par defaut et par parametre
	Specialite();
	Specialite(string domaine, int niveau);

	// Methodes d'acces
	string getDomaine() const;
	int getNiveau() const;

	// Methodes de modification
	void setDomaine(string domaine);
	void setNiveau(int niveau);

private:
	// Variables privees
	string domaine_;
	int niveau_;

};

#endif
