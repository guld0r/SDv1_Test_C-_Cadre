#pragma once
#include <string>

using namespace std;

class Cadre
{
public:
	//Constructeurs
	Cadre();
	Cadre(double m_x, double m_y, int m_largeur, int m_longueur, char* m_motif);
	//Destructeurs
	~Cadre();
	//Accesseurs
	int getLongueur()const;
	int getLargeur()const;
	char* getMotif()const;
	//Mutateurs
	void setLongueur(int m_longueur);
	void setLargeur(int m_largeur);
	void setMotif(char* m_motif);
	//Fonctions
	void caracteristique();
	int surface()const;
	int perimetre()const;
	bool isCarre()const;
private:
	//point d'ancrage du cadre
	double x;
	double y;
	//largeur du cadre
	int largeur;
	//longuer du cadre
	int longueur;
	//motif du cadre
	char* motif;
};

