#include <iostream>
#include <string>

# include "patron.h"



std::string Patron::get_username() const
{
    return username;
}

int Patron::get_cardnumber() const
{
    return card_number;
}

int Patron::get_libraryfee() const
{
    return library_fee;
}

void Patron::set_fee(int f)
{
    library_fee = f;
    // return;
}

bool is_indebt(const Patron &p)
{
    // if (p.get_libraryfee() > 0)
    //     return true;
    return p.get_libraryfee() > 0;
}
std::ostream &operator<<(std::ostream &os, const Patron &p)
{
    os << p.get_username() << "\n";
    os << p.get_cardnumber() << "\n";
    os << p.get_libraryfee() << "\n";
    return os;
}

int main()

{
    Patron p("clifford", 1, 0);
    p.set_fee(30);
    std::cout << is_indebt(p) << "\n";
    std::cout << p;
}