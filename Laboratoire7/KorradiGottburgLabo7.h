/** Doxygen commentaries
* \file
* \brief
* \details
* \author
* \date
* \version
* \copyright
* \remarks si plusieurs lignes
* \remark si une seule ligne
*/

#include <string>
using namespace std;
/**
* \brief Fonction exercice1 : Demande un nombre � l'utilisateur et le passe � la fonction isPerfectSquare.
* \details La fonction  a pour but de demander un nomber � l'utilisateur tant que ce n'est pas un nombre entier, puis de le passer � la fonction isPerfectSquare afin de d�terminer si c'est un carr� parfait. Le r�sultat sera ensuite affich�.
* \remark La fonction ne re�oit aucun argument en param�tre.
*/
void exercice1();


/**
* \brief Fonction exercice2 : Demande un nombre � l'utilisateur et le passe � la fonction displayDiamond.
* \remark La fonction ne re�oit aucun argument en param�tre.
* \details La fonction  a pour but de demander un nombre � l'utilisateur et le passe � la fonction displayDiamond.
*/
void exercice2();


/**
* \brief Fonction exercice4 : Demande un nombre entier positif � l'utilisateur et le passe � la fonction displayFibonacci.
* \remark La fonction ne re�oit aucun argument en param�tre.
* \details La fonction  a pour but de demander un nombre entier positif (la saisie est contr�l�e et redemand�e tant qu'elle est incorrect) et de le passer � la fonction displayFibonacci.

*/
void exercice4();


/**
* \brief Fonction exercice5 : Demande une suite de charact�res � l'utilisateur afin d'en afficher les d�tails
* \remark La fonction ne re�oit aucun argument en param�tre.
* \details La fonction  a pour but de demander une suite de charact�re � l'utilisateur, qui se terminera avec un #. Le nombre de charact�res, le nombre de mot, la longueur max des mots ainsi que le nombre de charact�res non alpha-num�riques sera affich�.
*/
void exercice5();


/**
* \brief Fonction afficher : Affiche le nombre de fois qu'elle est appel�e
* \remark La fonction ne re�oit aucun argument en param�tre.
* \details La fonction  a pour but d'afficher le nombre de fois qu'elle � �t� appel�e. Pour cela, une variable globale est incr�ment�e � chaque appel, et c'est celle-l� qu'on affiche.
*/
void afficher();


/**
* \brief Fonction displayDiamond : affiche un losange selon le nombre en entr�e
* \param[in] int nombre : Param�tre d'entr�e de type entier
* \details La fonction  a pour but d'afficher un losange compos� de '*' vaec 2*n-1 lignes

*/
void displayDiamond(int nombre);


/**
* \brief Fonction displayFibonacci : affiche le nombre saisi d'it�rations de la suite de Fibonacci.
* \param[in] int nombre : Param�tre d'entr�e de type entier
* \details La fonction  a pour but d'afficher la suite de Fibonacci pour le nombre d'it�rations saisi en entr�e par l'utilisateur.
*/
void displayFibonacci(int nombre);

/**
*
*
*
*/
int saisie(string text,int const MAX, int const MIN);


unsigned int saisie(string text, unsigned int const MAX = numeric_limits<unsigned int>::max(), unsigned int const MIN = numeric_limits<unsigned int>::min());
