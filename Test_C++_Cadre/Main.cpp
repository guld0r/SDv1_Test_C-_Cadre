/*
1) Le rôle d'un constructeur est d'instancier les attributs de la classe. Il est éxécuté dès la création de l'objet.

2)Le rôle d'un destructeur est de désallouer la mémoire. Il est éxécuté lorsque l'objet est supprimé de la mémoire.

3)Le constructeur d'une classe est la seule méthode avec le destructeur qui ne possède pas de type et de void, mais au contraire du destructeur il ne contient pas de ~ dans son nom.
Il peut y avoir plusieurs constructeurs dans une classe, car on peut vouloir attribuer des valeurs par défaut.

4)La surdéfiniton de fonction, c'est lorsque une fonction possède la même signature(nom et paramètres) qu'une autre fonction.

5)Public dans une classe signifie que la fonction peut être appelé en-dehors de sa classe mère.
Private dans une classe désigne les attributs privés, ceux qui ne sont pas utilisables hors de la classe mère.

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
	cout<<"La surface du cadre 1 est de : "<<cadre1.surface()<<" cm²"<<endl;
	cout<< "Le périmètre du cadre 1 est de : "<<cadre1.perimetre()<<" cm"<<endl;
	cadre1.setLargeur(12);
	cadre1.setMotif("a");
	cadre1.caracteristique();
	cout << "La surface du cadre 1 est de : " << cadre1.surface() << " cm²" << endl;
	if (cadre1.isCarre() == true)
		cout << "Le cadre 1 est un carré" << endl;
	else
		cout << "Le cadre 1 est un rectangle" << endl<<endl;
	cadre2.caracteristique();
	if (cadre2.isCarre() == true)
		cout << "Le cadre 2 est un carré" << endl;
	else
		cout << "Le cadre 2 est un rectangle" << endl;

	system("pause");
}