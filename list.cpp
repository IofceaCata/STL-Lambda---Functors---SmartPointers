#include <list>
#include <iostream>
#include <time.h>
#include "outputContainer.h"
#include <math.h>

using namespace std;

bool is_prim(const int& x)
{
    for(int i=2; i<= sqrt(x); i++) {
        if ((x%i) == 0)
            return true;
    }
    return false;
}

void listOps()
{
    list<int> list1{ 1, 2, 3, 4 };
	list<int> list2 = { 6, 7 };
	list2.push_front(5);
	list2.push_back(8);

	cout << "\n List 1: \n";
    outputContainer<list<int>>(list1);

    cout << "\n List 2: \n";
    outputContainer<list<int>>(list2);

	list<int>::iterator it = list1.begin();
	++it;	// pointing to second position

	/* transfer all elements of list2 at position 2 in list1 */
	list1.splice(it, list2);

	/* transfer element pointed by it in list1 to the beginning of list2 */
	list2.splice(list2.begin(), list1, it);

	cout << "\n After splice \n";
	cout << "List 1: \n";
    outputContainer<list<int>>(list1);

    cout << "\n List 2: \n";
    outputContainer<list<int>>(list2);

    cout<<'\n'<<'\n'<<"TEMA"<<'\n';

    list<int> list3;

    list3.insert(list3.end(),list1.begin(),list1.end());
    list3.insert(list3.end(),list2.begin(),list2.end());
    outputContainer<list<int>>(list3);

    int i=0;
    srand (time(NULL));

    while(i<=99){
        list3.push_back(rand() % 3465 + 35);
        i++;
    }
    outputContainer<list<int>>(list3);

    list3.remove_if(is_prim);

    outputContainer<list<int>>(list3);



}
