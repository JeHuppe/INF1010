/****************************************************************************
* Fichier: Medecin.cpp
* Auteur: Pierre-Olivier Côté
* Auteur: Jérémie Huppé	1854753
* Date: 31 janvier 2017
* Description: Implementation de la classe Medecin
****************************************************************************/

#include"Medecin.h"

/****************************************************************************
* Fonction:	Medecin::Medecin
* Description: Constructeur par defaut
* Paramètres:	aucun
* Retour:		aucun
****************************************************************************/
Medecin::Medecin() {
	nom_ = "";
	horaires_ = 0;
	specialite_ = nullptr;
}

/****************************************************************************
* Fonction:	Medecin::Medecin
* Description: Constructeur par parametres
* Paramètres:	string [IN], int [IN], Specialite* [IN].
* Retour:		aucun
****************************************************************************/
Medecin::Medecin(string nom, int horaires, Specialite* specialite) {
	nom_ = nom;
	horaires_ = horaires;
	specialite_ = specialite;
}

//Medecin::~Medecin() {			////J'AI AJOUTÉ À VÉRIFIER
//	delete[] specialite_;
//	specialite_ = nullptr;
//}

/****************************************************************************
* Fonction:	Medecin::obtenirNom
* Description: Retourne le contenu de la variable privée nom_
* Paramètres:	aucun
* Retour:		string [OUT]
****************************************************************************/
string Medecin::obtenirNom() const {
	return nom_;
}

/****************************************************************************
* Fonction:	Medecin::obtenirHoraires
* Description: Retourne le contenu de la variable privée horaires_
* Paramètres:	aucun
* Retour:		int [OUT]
****************************************************************************/
int Medecin::obtenirHoraires() const {
	return horaires_;
}

/****************************************************************************
* Fonction:	Medecin::obtenirSpecialite
* Description: Retourne le contenu pointé par le pointeur specialite_
* Paramètres:	aucun
* Retour:		Specialite [OUT]
****************************************************************************/
Specialite Medecin::obtenirSpecialite() const {	
	return *specialite_;
}

/****************************************************************************
* Fonction:	Medecin::modifierNom
* Description: Definit le contenu de la variable privée nom_
* Paramètres:	string [IN]
* Retour:		aucun
****************************************************************************/
void Medecin::modifierNom(string nom) {
	nom_ = nom;
}

/****************************************************************************
* Fonction:	Medecin::modifierHoraires
* Description: Definit le contenu de la variable privée horaires_
* Paramètres:	int [IN]
* Retour:		aucun
****************************************************************************/
void Medecin::modifierHoraires(int horaires) {
	horaires_ = horaires;
}

/****************************************************************************
* Fonction:	Medecin::modifierSpecialite
* Description: Definit le contenu pointe par le pointeur specialite_
* Paramètres:	Specialite* [IN]
* Retour:		aucun
****************************************************************************/
void Medecin::modifierSpecialite(Specialite* specialite) {
	delete specialite_;
	specialite_ = new Specialite(specialite->getDomaine(), specialite->getNiveau());
}

/****************************************************************************
* Fonction:	Medecin::afficher
* Description: Affiche le contenu d'un Medecin
* Paramètres:	aucun
* Retour:		aucun
****************************************************************************/
void Medecin::afficher() const {

	cout << "|       " << nom_ << "       |         " << horaires_ << "          |         " << specialite_->getDomaine() <<
		"         |            " << specialite_->getNiveau() << "             |" << endl;

}