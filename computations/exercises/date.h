#pragma once

class Date
{
public:
	Date(int y, int m, int d) : year{y}, month{m}, day{d} {

								};
	void add_day(int);
	int get_month();
	int get_day();
	int get_year();

private:
	int year, month, day;
};