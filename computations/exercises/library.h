#pragma once

#include "patron.h"

#include "book.h"

#include <vector>

#include <string>

#include "date.h"

class Library
{
public:
    struct Transaction
    {
        Transaction(Book bo, Patron pa, Date da) : b{bo}, p{pa}, d{da}
        {
        }
        Book b;
        Patron p;
        Date d;
    };
    void add_books(Book);
    void add_patrons(Patron);
    void add_transactions(Transaction);
    void checkout_books(Book, Patron, Date);
    std::vector<Patron> patron_indebt();
    std::vector<Book> get_books() const;
    std::vector<Patron> get_patrons() const;
    std::vector<Transaction> get_transactions() const;

private:
    std::vector<Book> buk;
    std::vector<Patron> pat;
    std::vector<Transaction> tran;
};