//Problema NetRom Sesiunea 1

#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;
int i,isUp;
int main()
{
    stack<int> stack1,aux;
    int x;
    vector<int> v;

    cout<<"action :";
    cin>>x;

    while(x!=5)
    {
        if(x==1){
            int aux;
            cin>>aux;
            v.insert(v.begin(), aux);
        }
        if(x==2){
            int aux;
            cin>>aux;
            v.push_back(aux);
        }
        if(x==3){
            rotate(v.begin(),v.end()-1,v.end());

        }
        if(x==4){
            for (vector<int>::iterator it = v.begin() ; it != v.end(); ++it)
            cout << ' ' << *it;
        }
        cout<<'\n'<<"action :";
        cin>>x;
    }
}
