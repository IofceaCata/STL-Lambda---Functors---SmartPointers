#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int> vect {1,2,3,4,5,6,7,8,9,10};

    if (binary_search(vect.begin(), vect.end(), 10))
       cout << "10 exists in vector"<<'\n';
    else
       cout << "10 does not exist"<<'\n';

    rotate(vect.begin(), vect.begin()+3, vect.end());

    for (auto it : vect)
        cout<<it<<" ";
}
