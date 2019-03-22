#include <iostream>
#include <vector>
#include <fstream>
#include<bits/stdc++.h>

#include "outputContainer.h"

using namespace std;

ifstream fin ("animals.in");
ofstream fout("animals.out");

void vectorOps()
{
    vector<string> initialAnimals(3, "Cat");
	initialAnimals.insert(initialAnimals.begin(), "Dog");
	initialAnimals.insert(initialAnimals.end(), "Rabbit");
	initialAnimals.push_back("Bird");

	cout << "\n Initial animals : (Capacity: " << initialAnimals.capacity() << ")\n";
	outputContainer<vector<string>>(initialAnimals);

	vector<string> animals(initialAnimals);
	animals.emplace_back("Frog");
	animals.push_back("Tiger");
	animals.emplace_back("Cat");

	cout << "\n animals: (Capacity: " << initialAnimals.capacity() << ")\n";
    outputContainer<vector<string>>(animals);

	vector<string>::iterator it = animals.begin();
	/* removes the first element from the vector */
	animals.erase(it);
	/* removes all the elements except last two */
	animals.erase(animals.begin(), animals.end() - 2);

	cout << "\n Reverse animals: \n";
	cout << "Size: " << animals.size() << " Capacity: " << animals.capacity() << "\n";
	for (vector<string>::reverse_iterator it = animals.rbegin(); it != animals.rend(); ++it)
	{
		cout << *it << " ";
	}

    cout<<'\n'<<'\n'<<"TEMA"<<'\n';

    string aux;
    while(fin>>aux)
        animals.push_back(aux);

    outputContainer<vector<string>>(animals);


    map<string, int> map1;
        for(auto it = animals.begin(); it != animals.end(); ++it){
            map1[*it]++;
        }

    fout<<map1.begin()->first<<'\n'<<map1.begin()->second;


    sort( animals.begin(), animals.end() );
    animals.erase( unique( animals.begin(), animals.end() ), animals.end() );

    cout<<'\n';
    outputContainer<vector<string>>(animals);



}
