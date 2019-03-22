#include <iostream>
#include <vector>		// vector
#include <stdlib.h>		// rand
#include <functional>	// modulus
#include <algorithm>	// sort

using namespace std;
using namespace std::placeholders;
/*
int GetRandom(const int limit)
{
	return rand() % limit;
}
*/

void GenerateRand(vector<int> &randVect , int limit)
{
	//auto rand100 = bind(GetRandom, 100);
	//generate(randVect.begin(), randVect.end(), rand100);


    generate(randVect.begin(), randVect.end(), [&]()
    {
        return rand() % limit;
    });

}

/*
void PrintElement(const int elem, const char separator)
{
	cout << elem << separator;
}
*/
void PrintElements(const vector<int>& vect)
{
	//auto print = bind(PrintElement, _1, ' ');
	//for_each(vect.begin(), vect.end(), print);
	for_each(vect.begin(), vect.end(), [](int i)
    {
        cout<<i<<" ";
    }
    );
	cout << endl;
}

void SortAsc(vector<int>& vect)
{
	sort(vect.begin(), vect.end(), less<int>());
}

int Sum(const vector<int>& vect)
{
	int sum = 0;
	/*
	for (auto value : vect)
	{
		sum += value;
	}
	return sum;
	*/

    sum = accumulate(vect.begin(), vect.end() , sum , [] (int i , int j)
    {
        return i + j;
    }
    );

    return sum;

}

int main()
{
	srand(123);

	vector<int> vect(10);

	GenerateRand(vect,100);

	PrintElements(vect);

	SortAsc(vect);

	PrintElements(vect);

	cout<< "Elements sum: " << Sum(vect);

	return 0;
}
