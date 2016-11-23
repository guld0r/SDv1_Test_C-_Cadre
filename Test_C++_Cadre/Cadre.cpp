#include "Cadre.h"
#include <string>
#include <iostream>


//Constructeurs
Cadre::Cadre(double m_x, double m_y, int m_longueur, int m_largeur, char* m_motif)
{
	x = m_x;
	y = m_y;
	longueur = m_longueur;
	largeur = m_largeur;
	motif = m_motif;
}

Cadre::Cadre()
{
	char *ch = "*";
	this->x = 10.0;
	this->y = 5.0;
	this->largeur = 5;
	this->longueur = this->largeur * 2;
	this->motif = new char;
	strcpy(motif, ch);
}

//Accesseurs
int Cadre::getLongueur()const
{
	return longueur;
}

int Cadre::getLargeur()const
{
	return largeur;
}

char* Cadre::getMotif()const
{
	return motif;
}

//Mutateurs
void Cadre::setLongueur(int m_longueur)
{
	longueur = m_longueur;
}

void Cadre::setLargeur(int m_largeur)
{
	largeur = m_largeur;
}

void Cadre::setMotif(char* m_motif)
{
	motif = m_motif;
}

//Fonctions qui renvoie les caractéristiques du cadre
void Cadre::caracteristique()
{
	cout << "Les coordonnées du point d'ancrage sont : " << this->x << ";" << this->y << endl;
	cout << "La largeur du cadre est de : " << this->longueur << " cm" << endl;
	cout << "La longueur du cadre est de : " << this->largeur << " cm" << endl;
	cout << "Le motif du cadre est : " << this->motif << endl<<endl;
}

//Fonction qui calcul la surface du cadre
int Cadre::surface()const
{
	return longueur*largeur;
}

//Fonction qui calcul le périmètre du cadre
int Cadre::perimetre()const
{
	return (longueur + largeur) * 2;
}

//Fonction qui renvoie vrai si le cadre est carré et faux sinon
bool Cadre::isCarre()const
{
	if (longueur == largeur)
		return true;
	else
		return false;
}

//Destructeur
Cadre::~Cadre()
{
	if (!motif)
		return;
	motif[0] = '\0';
	delete[]motif;
}
