#include <iostream>
#include <string>
#include <span>
using namespace std;

// void sizes(char ch, int i, double *p)
// {
//     cout << "the size of char is " << sizeof(char) << ' ' << sizeof(ch) << '\n';
//     cout << "the size of int is " << sizeof(int) << ' ' << sizeof(i) << '\n';
//     cout << "the size of int* is " << sizeof(int *) << ' ' << sizeof(p) << '\n';
// }

// class Vector
// {
// public:
//     Vector(int s);
//     ~Vector();

// private:
//     int sz;
//     double *elem;
// };

// Vector::Vector(int s)
//     : sz{s}, elem{new double[s]}
// {
//     for (int i = 0; i < s; ++i)
//     {
//         elem[i] = 3;
//     }
//     for (int a; a < sz; ++a)
//     {

//         cout << elem[a] << "\n";
//     }
// }

// Vector::~Vector()
// {
//     delete[] elem;
// }

// // ostream &operator<<(ostream os, Vector p)
// // {
// //     for (int a : p)
// //     {

// //         os << a << "\n";
// //     }
// // }
// class Animal
// {
// public:
//     void eat()
//     {
//         cout << "Eating\n";
//     }
// };
// class Dog : public Animal
// {
// };

// // Linked lists
// struct Link
// {
//     Link(const string &v, Link *p = nullptr, Link *s = nullptr)
//         : value{v}, prev{p}, succ{s} {}

//     string value;
//     Link *prev;
//     Link *succ;
// };

struct Link
{
    Link(const string &v, Link *p = nullptr, Link *s = nullptr)
        : value{v}, prev{p}, succ{s} {}

    string value;
    Link *prev;
    Link *succ;
};

ostream &operator<<(ostream &os, Link *l)
{
    os << "name of node: " << l->value << '\n';
    os << "name of the successor node: " << l->succ->value << '\n';
    os << "name of the previous node: " << l->prev->value << '\n';
    return os;
}

// int main()
// {
//     Link *norse = new Link{"Kratos", nullptr, nullptr};
//     Link *norse2 = new Link{"Thor", nullptr, norse};
//     Link *norse3 = new Link{"heyoo", nullptr, norse2};
//     norse2->prev = norse3;
//     norse->succ = norse2;
//     norse->prev = norse3;
//     norse3->prev = norse;

//     cout << "linkedlist stuff: " << norse2 << "\n";
//     cout << "linkedlist stuff: " << norse << "\n";
//     cout << "linkedlist stuff: " << norse3 << "\n";

//     // double *d = nullptr;
//     // sizes('a', 34, d);

//     // vector<int> *p = new vector<int>;
//     // cout << "address of p" << p << '\n';
//     // *p = {1, 2, 3, 3, 4, 5};
//     // // cout << "contents of p" << (*p) << '\n';
//     // (*p)[2] = 39;

//     // for (int p : *p)
//     // {
//     //     cout << "contents of p" << p << '\n';
//     // }

//     // double *i = new double[4];
//     // *i = {1};
//     // cout << "contents of double:" << *i << "\n";

//     // delete[] p;
//     Vector v(5);
//     Dog *d;
//     d->eat();
// }

Link *insert(Link *p, Link *n)
{
    if (n == nullptr)
    {
        return p;
    }

    if (p == nullptr)
    {
        return n;
    }

    n->succ = p; // p comes after n
    if (p->prev)
    {
        p->prev->succ = n;
    }
    n->prev = p->prev;
    p->prev = n;
    return n;
}

void print_all(Link *p)
{
    cout << "{ ";
    while (p)
    {
        cout << p->value;
        if (p = p->succ)
            cout << ", ";
    }
    cout << " }";
}

void print_ns(int *p, int n)
{
    if (p == nullptr)
    {
        return;
    }
    for (int i = 0; i < n; ++i)
    {
        cout << p[i] << '\n';
    }
}

// void prin (span<int> s)
// {
//     for (int x : s)
//         cout << x << ' ';
// }

void user()
{
    int a[7] = {1, 2, 33, 67, 89, 90, 87};
    int *p = new int[8]{12, 123, 89, 90, 78, 32, 67, 28};
    // ... fill a and *p ...
    print_ns(a, 7);
    print_ns(p, 8);
}

int main()
{
    Link *norse_gods = new Link{"Thor"};
    norse_gods = insert(norse_gods, new Link{"Odin"});
    norse_gods = insert(norse_gods, new Link{"Freja"});

    // cout << "Linked list: " << norse_gods << "\n";
    print_all(norse_gods);
    cout << '\n';

    // Pointer arithmetic
    double a[8];
    double *p = &a[4];

    *p = 7;
    // step the pointer by n then dereference p[n]= *(p+n)
    p[3] = 98;
    p[-3] = 109.5;

    for (double i : a)
    {
        cout << "current array: " << i << "\n";
    }

    user();
}