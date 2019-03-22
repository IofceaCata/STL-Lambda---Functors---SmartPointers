#include "problema_voturi.h"

#include <iostream>
#include <vector>
#include <string>
#include <map>

// http://www.infoarena.ro/problema-majoritatii-votului
/*
Se da o lista de candidati.

Se cere sa se determine daca exista vreun candidat care
are vot majoritar (apare in lista de voturi de n/2 + 1 ori).
*/

using namespace std;

void initVec(vector<string>& v)
{
    v.push_back("Viorel-Riceard Badea");
    v.push_back("Ramurel Pastrama");
    v.push_back("Joaca-Bine Mirel");
    v.push_back("Cojocaru Tom-Mac-Bil-Bob-Constantin");
    v.push_back("Joaca-Bine Mirel");
    v.push_back("Geniloni Sfecla");
    v.push_back("Joaca-Bine Mirel");
    v.push_back("Joaca-Bine Mirel");
    v.push_back("Rudolf Pufulete");
    v.push_back("Joaca-Bine Mirel");
    v.push_back("Bred Pit");
    v.push_back("Cojocaru Tom-Mac-Bil-Bob-Constantin");
    v.push_back("Joaca-Bine Mirel");
    v.push_back("Ilegitim Vasile");
    v.push_back("Mos Nicolae Craciun");
    v.push_back("Joaca-Bine Mirel");
    v.push_back("Ilegitim Vasile");
    v.push_back("Joaca-Bine Mirel");
    v.push_back("Cojocaru Tom-Mac-Bil-Bob-Constantin");
    v.push_back("Joaca-Bine Mirel");
    v.push_back("Joaca-Bine Mirel");
    v.push_back("Argentina Aristotel");
    v.push_back("Joaca-Bine Mirel");
    v.push_back("Joaca-Bine Mirel");
    v.push_back("Puscas Marin");
    v.push_back("Joaca-Bine Mirel");
    v.push_back("Argentina Aristotel");
    v.push_back("Joaca-Bine Mirel");
    v.push_back("Joaca-Bine Mirel");
    v.push_back("Mos Nicolae Craciun");
    v.push_back("Joaca-Bine Mirel");
}

void problemaVotului()
{
    vector<string> candidati; // initializat cu lista de candidati
    initVec(candidati);
    int nrTotal = candidati.size();


    bool found = false;         // se seteaza true daca exista castigator
    string castigator;          // se seteaza numele castigatorului
    int voturiCastigator = 0;   // se seteaza numarul de voturi primite de castigator

    /*
        TODO: algoritm de cautare a castigatorului
    */

    if (found)
    {
        cout << "A gastigat \"" << castigator << "\" cu " << voturiCastigator <<
             " voturi din " << nrTotal << endl;
    }
    else
    {
        cout << "Nu avem un numar majoritar de voturi" << endl;
    }
}
