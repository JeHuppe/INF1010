/****************************************************************************
* Fichier: Main.cpp
* Auteur: Pierre-Olivier Côté 
* Auteur: Jérémie Huppé	1854753
* Date: 31 janvier 2017
* Description: Description des instructions
****************************************************************************/


#include "Specialite.h"
#include "Medecin.h"
#include "Infirmier.h"
#include "Personnel.h"

#include <string>
#include <iostream>

using namespace std;

// Besoin d'un destructeur pour Medecin ? 
// Verifier Destructeur à la fin du programme petit probleme
// Affichage des Noms prenoms ... peut decaller tout le tableau, à vérifier.

void main()
{
	//C'est a vous de voir si vous devez allouer dynamiquement ou non les elements

	//1-  Creez un objet du type Infirmier � l'aide du constructeur par d�faut
	Infirmier infirmier1;

	//2-  Modifiez le nom, le prenom et le nbChambre de cet objet � l'aide des m�thodes de modification
	string nomInfirmier1 = "Pierre";
	string prenomInfirmier1 = "Pierre";
	int nbChambres1 = 7;

	infirmier1.setNom(nomInfirmier1);
	infirmier1.setPrenom(prenomInfirmier1);
	infirmier1.setNbChambres(nbChambres1);
	
	//3-  Creez 11 autres objets du type Infirmier � l'aide du constructeur par param�tre avec des valeurs de votre choix
	Infirmier infirmier2(nomInfirmier1, prenomInfirmier1, nbChambres1);
	Infirmier infirmier3(nomInfirmier1, prenomInfirmier1, nbChambres1);
	Infirmier infirmier4(nomInfirmier1, prenomInfirmier1, nbChambres1);
	Infirmier infirmier5(nomInfirmier1, prenomInfirmier1, nbChambres1);
	Infirmier infirmier6(nomInfirmier1, prenomInfirmier1, nbChambres1);
	Infirmier infirmier7(nomInfirmier1, prenomInfirmier1, nbChambres1);
	Infirmier infirmier8(nomInfirmier1, prenomInfirmier1, nbChambres1);
	Infirmier infirmier9(nomInfirmier1, prenomInfirmier1, nbChambres1);
	Infirmier infirmier10(nomInfirmier1, prenomInfirmier1, nbChambres1);
	Infirmier infirmier11(nomInfirmier1, prenomInfirmier1, nbChambres1);
	Infirmier infirmier12(nomInfirmier1, prenomInfirmier1, nbChambres1);
	//Infirmier infirmier21("allo", "aadr", 3); aussi sous ce format
	
	//4-  Creez un objet du type Personnel � l'aide du constructeur par d�faut
	Personnel personnel1;

	//5-  Ajoutez les 12 objets du type Infimier � tableauInfirmiers de ce dernier
	personnel1.ajouterInfirmier(infirmier1);
	personnel1.ajouterInfirmier(infirmier2);
	personnel1.ajouterInfirmier(infirmier3);
	personnel1.ajouterInfirmier(infirmier4);
	personnel1.ajouterInfirmier(infirmier5);
	personnel1.ajouterInfirmier(infirmier6);
	personnel1.ajouterInfirmier(infirmier7);
	personnel1.ajouterInfirmier(infirmier8);
	personnel1.ajouterInfirmier(infirmier9);
	personnel1.ajouterInfirmier(infirmier10);
	personnel1.ajouterInfirmier(infirmier11);
	personnel1.ajouterInfirmier(infirmier12);

	//6-  Creez un objet du type Specialite � l'aide du constructeur par d�faut
	Specialite specialite1;

	//7-  Modifiez le domaine et le niveau de cet objet � l'aide des m�thodes de modification
	string domaine1 = "Chirurgien";
	int niveau1 = 7;

	specialite1.setDomaine(domaine1);
	specialite1.setNiveau(niveau1);

	//8-  Creez 5 autres objets du type Specialite � l'aide du constructeur par param�tre avec des valeurs de votre choix
	Specialite specialite2(domaine1, niveau1);
	Specialite specialite3(domaine1, niveau1);
	Specialite specialite4(domaine1, niveau1);
	Specialite specialite5(domaine1, niveau1);
	Specialite specialite6(domaine1, niveau1);

	//9-  Creez un objet du type Medecin � l'aide du constructeur par d�faut
	Medecin medecin1;

	//10- Modifiez le nom, les horaires et la specialite de ce dernier
	string nomMedecin1 = "Pierre";
	int horaire1 = 7;
	Specialite* pointeurSpecialite1 = &specialite1;
		
	medecin1.modifierNom(nomMedecin1);
	medecin1.modifierHoraires(horaire1);
	medecin1.modifierSpecialite(pointeurSpecialite1);
																			
	//11- Creez 5 autres objets du type Medecin � l'aide du constructeur par param�tre avec des valeurs de votre choix
	Medecin medecin2(nomMedecin1, horaire1, &specialite2);
	Medecin medecin3(nomMedecin1, horaire1, &specialite3);
	Medecin medecin4(nomMedecin1, horaire1, &specialite4);
	Medecin medecin5(nomMedecin1, horaire1, &specialite5);
	Medecin medecin6(nomMedecin1, horaire1, &specialite6);

	//12- Expliquez la relation entre les deux objets Medecin et Specialite. Justifiez votre r�ponse

		// La spécialité du Médecin est définie à l'aide d'un pointeur qui pointe vers une spécialité prédéfinie dans l'espace mémoire.

	//13- Ajoutez les 6 objets du type Medecin � tableauMedecins de l'objet Personnel d�j� cr��
	personnel1.ajouterMedecin(medecin1);
	personnel1.ajouterMedecin(medecin2);
	personnel1.ajouterMedecin(medecin3);
	personnel1.ajouterMedecin(medecin4);
	personnel1.ajouterMedecin(medecin5);
	personnel1.ajouterMedecin(medecin6);

	//14- Affichez la liste des medecins
	personnel1.afficherMedecins();

	//15- Affichez la liste des infirmiers
	personnel1.afficherInfirmiers();
	
	//DOIT LIBÉRER ESPACE MÉMOIRE, PETIT PROBLÈME AVEC FONCTION DE DÉSALOCATION
	//delete pointeurSpecialite1;
	//personnel1.~Personnel();
	

}
