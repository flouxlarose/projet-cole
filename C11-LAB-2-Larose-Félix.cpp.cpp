#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	//CONSTANTES
	const char carac = 'A';
	const int entier = 75000;
	const short entierCourt = -42;
	const long entierLong = 57000;
	const float reel = 123.456;
	const double reelDouble = 12.0123456789;
	const unsigned int sansSigne = 54321;
	const int larg_Terminal = 120;
	const string titre = " 420-C11-VM -- Laboratoire 2";
	const int charactere_titre = 28;
	const int x = 8;
	const int y = 12;
	const int z = 10;
	const int a = 15;
	const int b = 16;

	//VARIABLES
	string nom = "";
	string numeroGroupe = "";
	string prenom = "";
	
	//TITRE
	cout << right << setw((larg_Terminal - charactere_titre) / 2 + charactere_titre) << titre << endl << endl;

	//OUTPUT 

	//NOM PRENOM ETC
	cout << "Taper votre pr\x82nom: ";
	cin >> prenom;
	cout << "Taper votre nom : ";
	cin >> nom;
	cout << "Taper votre num\x82ro de groupe: ";
	cin >> numeroGroupe;
	cout << endl;

	// TABLEAU 1
	cout << "Essai du cadrage \x85 gauche et de la notation en virgule flottante:" << endl;
	cout << left << setw(x) << entier;
	cout << setw(x) << entierCourt;
	cout << setw(x) << entierLong;
	cout << setw(x) << sansSigne;
	cout << setw(x) << carac << endl;
	cout << fixed << setprecision(2) << setw(x) << reel;
	cout << setw(x) << reelDouble << endl << endl;

	// TABLEAU 2
	cout << "Essai du cadrage \x85 droite et de la notation scientifique:" << endl;
	cout << right << setw(y) << entier;
	cout << setw(y) << entierCourt;
	cout << setw(y) << entierLong;
	cout << setw(y) << sansSigne;
	cout << setw(y) << carac << endl;
	cout << scientific << setprecision(5);
	cout << setw(a) << reel;
	cout << setw(a) << reelDouble << endl << endl;
	
	// TABLEAU 3
	cout << "Essai de mise en page:" << endl;
	cout << hex;
	cout << fixed << setprecision(3);
	cout << setw(x) << "";
	cout << left << setw(b) << "entier" << "= " << entier << endl;
	cout << setw(x) << "";
	cout << setw(b) << "entierCourt" << "= " << entierCourt << endl;
	cout << setw(x) << "";
	cout << setw(b) << "entierLong" << "= " << entierLong << endl;
	cout << setw(x) << "";
	cout << setw(b) << "sansSigne" << "= " << sansSigne << endl;
	cout << setw(x) << "";
	cout << setw(b) << "carac" << "= " << carac << endl;
	cout << setw(x) << "";
	cout << setw(b) << "reel" << "= "<< setw(z) << right << reel << endl;
	cout << setw(x) << "";
	cout << left << setw(b) << "reelDouble" << "= " << setw(z) << right << reelDouble << endl;
	cout << left << endl;

	//MESSAGE AU REVOIR
	cout << "Salut " << prenom << " " << nom << " du groupe " << numeroGroupe << " !";


	_getch();


}