#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

class Book
{
public:
    std::string isbn;
    std::string title;
    std::string author;
    std::string copywright_date;
    bool is_checkedout;

    std::string get_isbn();
    std::string get_title();
    std::string get_author();
    std::string get_copywright_date();
    void checkin_book();
    void checkout_book();
};

void Book::checkin_book()
{
    // Capture book's specifics
    std::string isb;
    std::string titl;
    std::string auth;
    std::string copy;
    std::cout << "PLease enter the book's ISBN data: " << "\n";
    std::cin >> isb;
    isbn = isb;
    std::cout << "PLease enter the book's TITLE: " << "\n";
    std::cin >> titl;
    title = titl;
    std::cout << "PLease enter the book's AUTHOR: " << "\n";
    std::cin >> auth;
    author = auth;
    std::cout << "PLease enter the book's COPYWRIGHT DATE: " << "\n";
    std::cin >> copy;
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

int main()
{
    Book b;
    b.checkin_book();
    std::cout<<b.get_author()<<"\n";
}