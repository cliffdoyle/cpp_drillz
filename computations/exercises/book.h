# pragma once

# include <string>

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

        : isbn{ i },
        title{ t },
        author{ a },
        copywright_date{ c },
        is_checkedout{ b },
        gen{ g }
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