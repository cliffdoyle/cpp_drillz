// Write program that consists of a while-loop
// reads in two ints and then prints them.
#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <algorithm>

using namespace std;

int main()
{
    // std::cout << "Hello my world" << std::endl;

    double x = 0;
    double y = 0;

    string input;

    double max = 0;
    double min = 0;
    bool is_first = true;
    string unit;
    double sum = 0;
    int count = 0;

    vector<double> v = {};
    while (true)
    {
        cout << "Please enter a number in X variable: " << "\n";
        cin >> input >> unit;
        if (input == "|")
        {
            break;
        }
        x = stod(input);
        if (unit != "cm" && unit != "m" && unit != "in" && unit != "ft")
        {
            cout << "wrong input kindly input 'm','cm','in'or'ft'\n";
            continue;
        }
        cout << "Value entered is: " << x << "unit entered is: " << unit << "\n";

        // well use m as our unit, that means any input different from m will
        // first be converted to m

        if (unit == "cm")
        {
            // 1m=100cm
            x /= 100;
        }
        else if (unit == "in")
        {
            // 1in=2.54cm
            x /= 39.3701;
        }
        else if (unit == "ft")
        {
            // 1ft=30.48cm
            x /= 3.28084;
        }

        // keep values entered in a vector
        v.push_back(x);
        sum += x;
        ++count;

        if (is_first)
        {
            max = x;
            min = x;
            is_first = false;
            cout << "first number enetered is: " << x << "\n";
            continue;
        }

        // list.push_back(x);

        if (x > max)
        {
            max = x;
            // cout << "the largest so far: " << max << "\n";
        }

        if (x < min)
        {
            min = x;
            // cout << "the smallest so far: " << min << "\n";
        }

        // // cout << "Please enter a number in Y variable: " << "\n";
        // // cin >> input;
        // // if (input == "|")
        // // {
        // //     break;
        // // };
        // // y = stod(input);
        // // if (x < y)
        // // {
        // //     cout << "the smaller value is: " << x << "\n";
        // //     cout << "the larger value is: " << y << "\n";

        // //     // double diff;
        // //     // diff = y - x;
        // //     if (y - x < 1.0 / 100)
        // //     {
        // //         cout << "the numbers are almost equal" << "\n";
        // //     }
        // // }
        // // else if (x > y)
        // // {
        // //     cout << "the larger value is: " << x << "\n";
        // //     cout << "the smaller value is: " << y << "\n";

        // //     // double diff;
        // //     // diff = x - y;
        // //     if (x - y < 1.0 / 100)
        // //     {
        // //         cout << "the numbers are almost equal" << "\n";
        // //     }
        // // }
        // // else
        // // {
        // //     cout << "the numbers are equal\n";
        // // }
    }
    cout << "sum of the total entries: " << sum << "\n";
    cout << "the smallest entry: " << min << "\n";
    cout << "the largest entry: " << max << "\n";
    cout << "number of values entered: " << count << "\n";

    // print out value entered in the vector
    for (size_t i : v)

    {
        sort(v.begin(), v.end());
        cout << "Values entered: " << i << "\n";
    }

    cout << "Program ended well" << "\n";

    return 0;
}