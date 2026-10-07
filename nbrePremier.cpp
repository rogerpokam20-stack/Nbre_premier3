/*
  ------------------------------------------------------------------------------
  Fichier     : nbre_1er.cpp
  Auteur(s)   : Roger Junior Pokam Youmbissi
  Date        :8/10/2026

  But         : identifier tous les nombres premiers compris
                et une valeur choisie par l'utilisateur

  Remarque(s) : les erreurs de saisie ne sont pas vérifiées

  Compilateur : gcc
  ------------------------------------------------------------------------------
*/

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    const int n_col = 5;
    char recommencer = 'O';

    while (recommencer == 'O')
    {
        int limite;

        // On va Sqisir une la limite
        cout << "Entrez une limite entre 2 et 1000 : ";
        cin >> limite;

        while (limite < 2 || limite > 1000)
        {
            cout << "Valeur incorrecte. Entrez une limite entre 2 et 1000 : ";
            cin >> limite;
        }
// I est le compteur
        int I = 0;

        // je vais Rechercher tous les nbres premiers
        for (int nombre = 2; nombre <= limite; nombre++)
        {
            bool premier = true;

            // On cherche un diviseur du nbre
            for (int diviseur = 2; diviseur < nombre; diviseur++)
            {
                if (nombre % diviseur == 0)
                {
                    premier = false;
                }
            }

            // Si le nbre est premier, on l'affiche
            if (premier)
            {
                cout << setw(10) << nombre;
                I++;

                // Retour à la ligne après n_col nombres(Obligatoirement)
                if (I % n_col == 0)
                {
                    cout << endl;
                }
            }
        }

        cout << endl;

        // On Demande si l'utilisateur veut recommencer
        cout << "Voulez-vous recommencer [O/N] ? ";
        cin >> recommencer;

        while (recommencer != 'O' && recommencer != 'N')
        {
            cout << "Erreur. Entrez O ou N : ";
            cin >> recommencer;
        }
    }

    return 0;
}
