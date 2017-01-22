/****************************************************************************
* Fichier: Personnel.cpp
* Auteur: Pierre-Olivier Côté
* Auteur: Jérémie Huppé	1854753
* Date: 31 janvier 2017
* Description: Implementation de la classe Personnel
****************************************************************************/

#include "Personnel.h"

/****************************************************************************
* Fonction:	Personnel::Personnel
* Description: Constructeur par defaut
* Paramètres:	aucun
* Retour:		aucun
****************************************************************************/
Personnel::Personnel()
{
	capaciteTableauInfirmiers_ = 3;
	capaciteTableauMedecins_ = 3;

	compteurInfirmier_ = 0;
	compteurMedecin_ = 0;

	tableauInfirmiers_ = new Infirmier[capaciteTableauInfirmiers_];
	tableauMedecins_ = new Medecin[capaciteTableauMedecins_];

}

/****************************************************************************
* Fonction: Personnel::~Personnel
* Description: Destructeur
* Paramètres:	aucun
* Retour:		aucun
****************************************************************************/
Personnel::~Personnel()
{
	delete[] tableauMedecins_;
	delete[] tableauInfirmiers_;
	tableauMedecins_ = nullptr;
	tableauInfirmiers_ = nullptr;
}

/****************************************************************************
* Fonction: Personnel::ajouterMedecin
* Description: Ajoute un Medecin au tableau de Medecins (tableauMedecins_)
* Paramètres:	Medecin [IN]
* Retour:		aucun
****************************************************************************/
void Personnel::ajouterMedecin(Medecin& unMedecin)
{
	if (compteurMedecin_ >= capaciteTableauMedecins_) {
		if (capaciteTableauMedecins_ <= 0) {
			capaciteTableauMedecins_ = 3;
		}
		else {
			capaciteTableauMedecins_ *= 2;
		}
		Medecin* nouveauTableauMedecins = new Medecin[capaciteTableauMedecins_];
		for (unsigned int i = 0; i < compteurMedecin_; i++) {
			nouveauTableauMedecins[i] = tableauMedecins_[i];
		}
		delete[] tableauMedecins_;
		tableauMedecins_ = nouveauTableauMedecins;
	} 

	tableauMedecins_[compteurMedecin_] = unMedecin;
		compteurMedecin_++;
}

/*****************************************************************************
* Fonction: Personnel::ajouterInfirmier
* Description: Ajoute un Infirmier au tableau d'Infirmier (tableauInfirmiers_)
* Paramètres:	Infirmier [IN]
* Retour:		aucun
*****************************************************************************/
void Personnel::ajouterInfirmier(Infirmier& unInfirmier)
{
	int newCapacite = -1;

	if (capaciteTableauInfirmiers_ <= compteurInfirmier_) {
		if (capaciteTableauInfirmiers_ <= 0) {
			newCapacite = 3;
		} 
		else {
			newCapacite = capaciteTableauInfirmiers_ * 3;
		}

		Infirmier* nouveauTableauInfirmier = new Infirmier[newCapacite]; 

		for (unsigned int i = 0; i < compteurInfirmier_; i++) {
			nouveauTableauInfirmier[i] = tableauInfirmiers_[i];
		}

		delete[] tableauInfirmiers_;

		tableauInfirmiers_ = nouveauTableauInfirmier;
		capaciteTableauInfirmiers_ = newCapacite;
	}
	tableauInfirmiers_[compteurInfirmier_] = unInfirmier;
	compteurInfirmier_++;
}

/*****************************************************************************
* Fonction: Personnel::afficherMedecins
* Description: Affiche le contenu du tableau de Medecins (tableauMedecins_)
* Paramètres:	aucun
* Retour:		aucun
*****************************************************************************/
void Personnel::afficherMedecins() const 
{
	
	cout << "========================================Tableau Medecins===========================================" << endl;
	cout << "===================================================================================================" << endl;
	cout << "|        Nom         |      Horaires      |     Domaine Specialite     |     Niveau Specialite    |" << endl;


	for (unsigned int i = 0; i < compteurMedecin_; i++) {
		tableauMedecins_[i].afficher();
	}
	cout << "===================================================================================================" << endl;
	cout <<  endl << endl;
}

/*****************************************************************************
* Fonction: Personnel::afficherInfirmiers
* Description: Affiche le contenu du tableau d'Infirmiers (tableauInfirmiers_)
* Paramètres:	aucun
* Retour:		aucun
*****************************************************************************/
void Personnel::afficherInfirmiers() const
{
	cout << "================================Infirmier===============================" << endl;
	cout << "========================================================================" << endl;
	cout << "|        Nom         |      Prenom        |     Nombre de Chambres     |" << endl;

	for (unsigned int i = 0; i < compteurInfirmier_; i++) {
		tableauInfirmiers_[i].afficher();
	}

	cout << "========================================================================" << endl;
	cout << endl << endl;
}
