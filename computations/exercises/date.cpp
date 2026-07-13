#include "date.h"

Date::Date(int year, int month, int day) : year{year}, month{month}, day{day}
{
}

void Date::add_day(int n)
{
	day + n;
}

int Date::get_month()
{
	return month;
}

int Date::get_day()
{
	return day;
}

int Date::get_year()
{
	return year;
}