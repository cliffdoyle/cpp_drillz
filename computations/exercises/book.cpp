#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cctype>
enum class Genre
{
    fiction = 1,
    nonfiction,
    periodical,
    biography,
    children

};

class Book
{
public:
    Book(std::string i, std::string t, std::string a, std::string c, bool b, Genre g)

        : isbn{i},
          title{t},
          author{a},
          copywright_date{c},
          is_checkedout{b},
          gen{g}
    {
    }

    std::string get_isbn();
    std::string get_title();
    std::string get_author();
    std::string get_copywright_date();
    void checkin_book();
    void checkout_book();

private:
    std::string isbn;
    std::string title;
    std::string author;
    std::string copywright_date;
    Genre gen;
    bool is_checkedout;
};

void Book::checkin_book()
{
    // Capture book's specifics
    std::string isb;
    std::string titl;
    std::string auth;
    std::string copy;
    bool isvalid = true;
    std::cout << "PLease enter the book's ISBN data: " << "\n";
    std::cin >> isb;
    // for (size_t i = 0; i < isb.size(); i++)
    // {
    if (isb.size() != 7)
    {
        // break;
        isvalid = false;
        std::cerr << "invalid isbn" << "\n";
        return;
    }
    char x = isb[0];
    char y = isb[2];
    char v = isb[4];
    char w = isb[6];

    if (!std::isdigit(x) || !std::isdigit(y) || !std::isdigit(v))
    {
        // break;
        isvalid = false;
        std::cerr << "invalid isbn" << "\n";
        return;
    }

    if (isb[1] != '-' || isb[3] != '-' || isb[5] != '-')
    {
        // break;
        isvalid = false;
        std::cerr << "invalid isbn" << "\n";
        return;
    }
    if (isvalid)
    {

        isbn = isb;
    }

    std::cout << "PLease enter the book's TITLE: " << "\n";
    std::cin >> titl;
    if (titl.size() < 1)
    {
        std::cerr << "error title cant be less than 1!!";
    }
    title = titl;
    std::cout << "PLease enter the book's AUTHOR: " << "\n";
    std::cin >> auth;
    if (auth.size() < 1)
    {
        std::cerr << "error author name cant be less than 1!!";
    }

    author = auth;
    std::cout << "PLease enter the book's COPYWRIGHT DATE: " << "\n";
    std::cin >> copy;
    if (copy.size() < 1)
    {
        std::cerr << "error copy-date cant be less than 1!!";
    }
    copywright_date = copy;
}

void Book::checkout_book()
{
}
std::string Book::get_title()
{
    return title;
}

std::string Book::get_isbn()
{
    return isbn;
}

std::string Book::get_author()
{
    return author;
}

std::string Book::get_copywright_date()
{
    return copywright_date;
}

// Operators for the book
bool operator==(Book &a, Book &b)
{
    return a.get_isbn() == b.get_isbn();
}

bool operator!=(Book &a, Book &b)
{
    return a.get_isbn() != b.get_isbn();
}

std::ostream &operator<<(std::ostream &os, Book &b)
{
    os << "Book title is: " << b.get_title() << "\n";
    os << "Book author is: " << b.get_author() << "\n";
    os << "Book ISBN number is: " << b.get_isbn() << "\n";
    return os;
}

int main()
{
    std::string isbn = "1-2-3-4";
    std::string title = "larevencha";
    std::string author = "cliff";
    std::string copywright_date = "1122025";
    Genre gen = Genre::children;
    bool is_checkedout = false;
    Book b(isbn, title, author, copywright_date, is_checkedout, gen);
    b.checkin_book();
    // std::cout << b.get_author() << "\n";
    // std::cout << b.get_isbn() << "\n";
    // std::cout << b.get_title() << "\n";
    std::cout << b << "\n";
}