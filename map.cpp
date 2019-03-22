#include <map>
#include "outputContainer.h"
#include <fstream>
#include <unordered_map>

using namespace std;

ifstream finm ("places.in");
void outputMap(map<string, string>& myMap)
{
    int n = 0;
    cout << "Size: " << myMap.size() << "\n";
    for (const auto it : myMap)
    {
        cout << n++ << ": ";
        cout << it.first << " " << it.second << "\n";
    }
}

void mapOps()
{
    map<string, string> places{ { "Craiova", "Dolj" },{ "Brasov", "Brasov" },{ "Iasi", "Iasi" } };
    places.insert(pair<string, string>("Ploiesti", "Prahova"));
    places.insert(make_pair("Sibiu", "Sibiu"));	// make_pair() can also be used for creating a pair

    //outputContainer<map<string, string>>(places);
    cout << "\n Places: \n";
    outputMap(places);

    auto craiovaIt = places.find("Craiova");	// points to entry having key = "Craiova"
    auto sibiuIt = places.find("Sibiu");		// points to entry having key = "Sibiu"

    /* newPlaces contains all entries pointed by iterator craiovaIt to iterator sibiuIt */
    map<string, string> newPlaces(craiovaIt, sibiuIt);
    cout << "\n New Places: \n";
    outputMap(newPlaces);

    /* does not insert the pair as newPlaces already contains key = "Craiova" */
    newPlaces.insert(make_pair("Craiova", "Dolj"));
    newPlaces["Craiova"] = "";
    newPlaces.insert(make_pair("Craiova", "Dolj"));
    newPlaces.insert(make_pair("Constanta", "Constanta"));

    cout << "\n New Places after insert: \n";
    outputMap(newPlaces);

    places.erase(craiovaIt);
    newPlaces.erase("Craiova");

    newPlaces.insert(places.begin(), places.end());
    cout << "\n New Places after erase and insert: \n";
    outputMap(newPlaces);

    cout<<'\n'<<'\n'<<"TEMA"<<'\n';

    map<string, string> placesT;

    string aux,aux3;
    int aux2;

    while(finm>>aux>>aux2)
    {
        for(int i=0;i<aux2;i++)
        {

            finm>>aux3;
            placesT.insert(pair<string, string>(aux3, aux));
        }
    }
    outputMap(placesT);
    cout<<'\n';


    for (auto it : placesT)
    {
        if(it.second == "Dolj" || "Olt" || "Mehedinti" || "Valcea" || "Gorj")
        cout << it.first << '\n';
    }

}
