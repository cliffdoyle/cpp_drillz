# include <iostream>

//# include <os>

enum class month {
	jan=1,feb,mar,apr,may,june,july,aug,sep,oct,nov,dec
};

static int to_int(month m)
{
	return static_cast<int>(m);

}

static month operator++(month& m)
{
	m = (m == month::dec) ? month::jan : month(to_int(m) + 1);
	return m;
}


static std::ostream& operator<<(std::ostream& os,month m)
{
	switch (m)
	{
	case month::jan: os << "January";break;
	case month::feb: os << "February";break;
	case month::mar: os << "March";break;
	case month::apr: os << "April";break;
	case month::may: os << "May";break;
	case month::june: os << "June";break;
	case month::july: os << "July";break;
	case month::aug: os << "August";break;
	case month::sep: os << "September";break;
	case month::oct: os << "October";break;
	case month::nov: os << "November";break;
	case month::dec: os << "December";break;
	}
	return os;
}


int main()
{
	month f = month::dec;
	++f;
	std::cout << "current month: "<< f << "\n";
	std::cout << "Done overloading" << "\n";
}