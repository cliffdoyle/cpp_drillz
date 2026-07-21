#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main()
{

    cout << "Please enter a name\n";

    int i;
    cin >> i;
    cout << "hey!"<<i<<"\n";

    string name;
    cin >> name;
    ifstream ist{"hello.txt"};
    if (!ist)
        throw 404;
    ist >> name;
    cout << name << "\n";

    struct tempe
    {
        int hr;
        double tem;
    };

    int h;
    double d;
    vector<tempe> temps;

    while (ist >> h >> d)
    {
        if (h < 0 || d < 0)
            throw 404;
        temps.push_back(tempe{h, d});
    }

    ofstream out{"out.tx"};

    for (tempe t : temps)
    {
        out << "hour: " << t.hr << "temperture:  " << t.tem << "\n";
    }
}