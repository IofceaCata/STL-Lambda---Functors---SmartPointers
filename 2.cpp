#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int> vect {2, 5, 6, 7, 8, 8, 9};
    int nr;
    cin>>nr;

    auto const pos1 = lower_bound( vect.begin(), vect.end(), nr );

    int low = pos1 - vect.begin();

    if(nr > vect.back())
        cout<<vect[low-1];
    else
        cout<<vect[low];

}
