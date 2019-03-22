#include <iostream>
#include <functional>
#include <memory>
#include <fstream>

using namespace std;

ifstream fin("ops.in");
ofstream fout("ops.out");
struct Accumulator
{
    int _acc;

    Accumulator(int acc) : _acc(acc) {
    cout << "#ACC...\n";
    }
    ~Accumulator(){
    cout << "#~ACC...\n";
    }

    Accumulator(Accumulator const& a) : _acc(a._acc)
    {
        std::cout << "Accumulator(Accumulator const&)" << std::endl;
    }

    int incrementAcc(int inc)
    {
        _acc += inc;
        return _acc;
    }
};

int main()
{
   /* TODO: create 3 Accumulator variables: u, s, w using smart pointers (unique, shared, weak) */
    unique_ptr<Accumulator> u (new Accumulator(0));
    weak_ptr  <Accumulator> v;
    shared_ptr<Accumulator> s (new Accumulator(0));


           /* TODO: uncomment the following lines */
            /*
            auto S1 = std::bind(&Accumulator::incrementAcc, s, 3);
            cout << "[incrementAcc] s: " << S1() <<endl;


            auto S2 = std::bind(&Accumulator::incrementAcc, s, 3);
            s->_acc = 1000;
            std::cout << "[incrementAcc] s: " << S2() << std::endl;




   /* TODO: use u, s, v and std::bind to perform the operations from ops.in */

    int x;
    //fin>>x;
    string x2;
    while(fin>>x)
    {
        fin>>x;
        //cout<<x<<endl;
        auto S = bind(&Accumulator::incrementAcc, s, x);
        //cout<<S()<<endl;
    }
/////////////////////////////////////////////////////////////
    //cout<<x;
    /*
    string a;
    fin>>a;
    cout<<a<<endl;
    while(fin>>x)
    {
        fin>>x2;
        //cout<<x<<endl;
        //Jauto U = bind(&Accumulator::incrementAcc, u, x);
        //cout<<U()<<endl;
    }

    /*
    auto S = bind(&Accumulator::incrementAcc, s, x);

        //cout << "s: " << S() <<endl;
    string x1;
    fin>>x1;
    fin>>x;
    cout<<x<<" "<<x1<<endl;
    S = bind(&Accumulator::incrementAcc, s, x);
    cout<<"aici"<<endl;
    }*/

   return 0;
}
