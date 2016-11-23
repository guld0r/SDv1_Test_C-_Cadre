/*
1) Le r�le d'un constructeur est d'instancier les attributs de la classe. Il est �x�cut� d�s la cr�ation de l'objet.

2)Le r�le d'un destructeur est de d�sallouer la m�moire. Il est �x�cut� lorsque l'objet est supprim� de la m�moire.

3)Le constructeur d'une classe est la seule m�thode avec le destructeur qui ne poss�de pas de type et de void, mais au contraire du destructeur il ne contient pas de ~ dans son nom.
Il peut y avoir plusieurs constructeurs dans une classe, car on peut vouloir attribuer des valeurs par d�faut.

4)La surd�finiton de fonction, c'est lorsque une fonction poss�de la m�me signature(nom et param�tres) qu'une autre fonction.

5)Public dans une classe signifie que la fonction peut �tre appel� en-dehors de sa classe m�re.
Private dans une classe d�signe les attributs priv�s, ceux qui ne sont pas utilisables hors de la classe m�re.

*/

#include <iostream>
#include <string>
#include "Cadre.h"

using namespace std;

int main()
{
	Cadre cadre1;
	Cadre cadre2(0.0, 0.0, 3, 3, "h");

	cadre1.caracteristique();
	cout<<"La surface du cadre 1 est de : "<<cadre1.surface()<<" cm�"<<endl;
	cout<< "Le p�rim�tre du cadre 1 est de : "<<cadre1.perimetre()<<" cm"<<endl;
	cadre1.setLargeur(12);
	cadre1.setMotif("a");
	cadre1.caracteristique();
	cout << "La surface du cadre 1 est de : " << cadre1.surface() << " cm�" << endl;
	if (cadre1.isCarre() == true)
		cout << "Le cadre 1 est un carr�" << endl;
	else
		cout << "Le cadre 1 est un rectangle" << endl<<endl;
	cadre2.caracteristique();
	if (cadre2.isCarre() == true)
		cout << "Le cadre 2 est un carr�" << endl;
	else
		cout << "Le cadre 2 est un rectangle" << endl;

	system("pause");
}