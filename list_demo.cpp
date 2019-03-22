#include <set>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <fstream>
#include <list>
#include <algorithm>

using namespace std;

// Define a structure for a rectangle: x1, y1, x2, y2
// Define a constructor for the rectangle
struct rect
{
    int x1, y1;
    int x2, y2;

    rect(int a, int b, int c, int d) :
        x1(a),
        y1(b),
        x2(c),
        y2(d)
    {
    }
};

int area(const rect& r)
{
    // TODO: calculate area: W x H = (x2-x1) * (y2-y1)
    int area = 0;
    area = (r.x2 - r.x1) * (r.y2 - r.y1);
    return area;
}
int perimeter(const rect& r)
{
    int perimeter = 0;
    perimeter = sqrt((r.x2 - r.x1)*(r.x2 - r.x1) + (r.y2 - r.y1)*(r.y2 - r.y1));
    return perimeter;
}


// TODO: define operator == based on the rectangle area
bool operator==(const rect& r1, const rect& r2)
{
    if (area(r1) == area(r2))
        return true;

}

// TODO: define operator < based on the rectangle area
bool operator<(const rect& r1, const rect& r2)
{
    //if(area(r1) < area(r2))
        //return true;
        return area(r1) < area(r2);
}

bool comp(const rect& r1, const rect& r2)
{
    //if(area(r1) < area(r2))
        //return true;
        return area(r1) < area(r2);
}


// TODO: print rectangle content and area to cout
void print(const rect& r)
{
    cout << "Rect: " << endl;
    cout << r.x1 << " "<<r.y1 << " "<<r.x2 <<" "<<r.y2<<'\n';
    cout << area(r);
}

void outputList(list<rect>& lst)
{
    // iterate through the container and display content
    for(auto it = lst.begin() ; it!= lst.end() ; ++it){
        print(*it);
        cout<<endl;
    }



}

void listDemo()
{
    // TODO: Create 8 objects
    rect r1(2,3,7,9) ,r2(1,2,3,4) , r3(1,2,2,2) , r4(2,2,3,4) , r5(3,2,3,4) ,r6(9,5,6,4) ,r7(1,2,6,4),r8(1,2,3,4) , r9(2,3,8,8);

    //print(r1);

    list<rect> l;

    l.push_back(r1);
    l.push_back(r2);
    l.push_back(r3);
    l.push_back(r4);
    l.push_back(r5);
    l.push_back(r6);
    l.push_back(r7);
    l.push_back(r8);
    l.push_back(r9);

    // TODO: Display the container
    outputList(l);


    cout<<'\n'<<'\n'<<"TEMA"<<'\n';

    print( * max_element(l.begin(),l.end(),comp ) );




}
