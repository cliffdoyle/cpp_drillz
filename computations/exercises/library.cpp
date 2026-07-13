#include "library.h"

#include <vector>

#include <iostream>

void Library::add_books(Book n)
{
    buk.push_back(n);
}

void Library::add_patrons(Patron p)
{
    pat.push_back(p);
}

void Library::add_transactions(Transaction t)
{
    tran.push_back(t);
}

std::ostream &operator<<(std::ostream &os, Book &b)
{
    os << "Book title is: " << b.get_title() << "\n";
    os << "Book author is: " << b.get_author() << "\n";
    os << "Book ISBN number is: " << b.get_isbn() << "\n";
    // os << "Book Genre is: " << b.Genre:: << "\n";
    return os;
}

std::ostream &operator<<(std::ostream &os, Patron &p)
{
    os << "username is: " << p.get_username() << "\n";
    os << "cardnumber is: " << p.get_cardnumber() << "\n";
    os << "libo fee owed is: " << p.get_libraryfee() << "\n";
    // os << "Book Genre is: " << b.Genre:: << "\n";
    return os;
}

std::vector<Book> Library::get_books() const
{
    return buk;
}

void Library::checkout_books(Book b, Patron p, Date d)
{
    bool found_book{false};
    bool found_patron{};
    for (int i = 0; i < buk.size(); i++)
    {
        if (buk[i].get_isbn() == b.get_isbn())
        {
            std::cout << "The requested book found in the Library!" << "\n";
            found_book = true;
            break;
        }
    };

    for (int j = 0; j < pat.size(); j++)
    {
        if (pat[j].get_username() == p.get_username())
        {
            std::cout << "User is in the Library!" << "\n";
            found_patron = true;
            break;
        }
    };

    if (p.is_indebt())
        std::cout << "The user owes library fee!!" << "\n";
    return;

    Transaction t(b, p, d);
    if (found_book && found_patron)
        tran.push_back(t);
    else
        std::cout << "Book not found in the library!!" << "Patron not registered in the library!!" << "\n";
    return;
}

std::vector<Patron> Library::patron_indebt()
{
    std::vector<Patron> p;
    for (int i = 0; i < pat.size(); i++)
    {
        if (pat[i].is_indebt())
        {
            p.push_back(pat[i]);
        }
    }
    return p;
}

// std::ostream operator <<(std::ostream& os, Book b)
//{
//
// }

int main()
{
    Book b("1-2-3-p", "libo", "lafavorita", "12/12/2025", false, Book::Genre::nonfiction);
    Book a("1-0-3-p", "ongele", "lafavorita", "12/12/2025", false, Book::Genre::nonfiction);
    Book c("1-9-3-p", "ochuodho", "lafavorita", "12/12/2025", false, Book::Genre::nonfiction);
    Patron p("babul", 1200, 0);
    Patron e("babu", 1200, 90);
    Patron j("bab", 1200, 29);
    Date today(2026, 07, 13);
    Library l;
    l.add_books(b);
    l.add_books(a);
    l.add_books(c);
    l.add_patrons(p);
    l.add_patrons(e);
    l.add_patrons(j);
    l.checkout_books(b, p, today);
    l.checkout_books(a, e, today);
    l.checkout_books(c, j, today);
    std::vector<Book> r = l.get_books();
    for (Book b : r)
    {
        std::cout << b << "\n";
    }

    std::vector<Patron> ps = l.patron_indebt();
    for (Patron b : ps)
    {
        std::cout << b << "\n";
    }
}
