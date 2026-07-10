# include "date.h"

Date::Date(int year,int month, int day) :y{year},m{month},d{day}
{}

Date::add_day(int n)
{
	return d + n;
}

Date::month()
{
	return m;
}

Date::day()
{
	return d;
}

Date::year()
{
	return y;
}