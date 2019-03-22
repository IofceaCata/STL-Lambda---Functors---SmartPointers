#include <set>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include "outputContainer.h"

using namespace std;

ifstream finc ("cities.in");
ofstream foutc ("cities.out");

bool toFind(const string a){
    if(a[a.size()-1]=='a')
        return true;
    else
        return false;
}
void setOps()
{
    set<string> setOfCities;
	setOfCities.insert("Sibiu");
	setOfCities.insert("Craiova");
	setOfCities.insert("Bucuresti");
	setOfCities.insert("Craiova");

	cout << " Set Of Cities: \n";
	outputContainer<set<string>>(setOfCities);

	vector<string> newCities{ "Iasi", "Sibiu", "Timisoara" };
	newCities.push_back("Slatina");
	newCities.emplace_back("Bals");

	cout << "\n Vector of New Cities: \n";
	outputContainer<vector<string>>(newCities);

	setOfCities.insert(newCities.begin(), newCities.begin() + 4);
    cout << "\n Set Of Cities after insert: \n";
	outputContainer<set<string>>(setOfCities);

	set<string>::iterator it = setOfCities.find("Sibiu");
	if (it != setOfCities.end())
	{
		setOfCities.erase(it);
	}

	setOfCities.erase("Slatina");

	cout << "\n Set Of Cities after erase: \n";
	outputContainer<set<string>>(setOfCities);


    cout<<'\n'<<'\n'<<"TEMA"<<'\n';

    string aux;
    while(finc>>aux)
        setOfCities.insert(aux);
    outputContainer<set<string>>(setOfCities);
    cout<<'\n';

    for (auto it = setOfCities.begin(); it != setOfCities.end(); ) {
        aux=*it;
	    if(aux[0] == 'T')
            setOfCities.erase(it++);
        else
            ++it;
    }

	outputContainer<set<string>>(setOfCities);
    cout<<'\n';

    int nr=0;
    for (auto it = setOfCities.begin(); it != setOfCities.end() ;++it) {
        aux=*it;
	    if(aux[aux.size()-1] == 'a')
            nr++;
    }
    cout<<"Nr orase care se termina in litera 'a' : "<<nr;

    //set<string>::iterator itq = find(setOfCities.begin(), setOfCities.end(), toFind);
    //auto itq = find(setOfCities.begin(), setOfCities.end(),itq[0]=='T');
}
