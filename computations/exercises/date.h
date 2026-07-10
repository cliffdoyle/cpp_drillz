# pragma once

class Date
{
public:
	Date(int, int, int);
	void add_day(int);
	int get_month();
	int get_day();
	int get_year();
private:
	int y, m, d;
};