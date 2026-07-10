# include "library.h"

# include <vector>

# include <iostream>


void Library::add_books(Book n) const
{
	b.push_back(n);

}

void Library::add_patrons(Patron p) const
{
	p.push_back(p);

}

std::ostream& operator<<(std::ostream& os, Book& b)
{
	os << "Book title is: " << b.get_title() << "\n";
	os << "Book author is: " << b.get_author() << "\n";
	os << "Book ISBN number is: " << b.get_isbn() << "\n";
	return os;
}

std::vector<Book> Library::get_books() const
{
	return b;
}

void Library::check_out_books()
{

}

//std::ostream operator <<(std::ostream& os, Book b)
//{
//
//}

int main()
{
	Book("1-2-3-p","libo","lafavorita","12/12/2025",false,Genre::nonfiction);
	Library l;
	l.add_books();
		std::vector<Book> r = l.get_books();
		for (Book b : r)
		{
			std::cout << b << "\n";
		}

}

