# pragma once
# include <string>

class Patron
{
    std::string username;
    int card_number;
    int library_fee;

public:
    Patron(std::string name, int card, int libr) : username{ name }, card_number{ card }, library_fee{ libr }
    {
    }
    std::string get_username() const;
    int get_cardnumber() const;
    int get_libraryfee() const;
    void set_fee(int);
};